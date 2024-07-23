#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(" ")) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) return result;

    pos = 0;
    while ((pos = txt.find(",")) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (!txt.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count & 1)) {
                result.push_back(to_string(count));
                break;
            }
            if (c >= 'a' && c <= 'z') {
                count++;
            }
        }
    }

    return result;

int main() {
    string txt;
    cout << "Enter a sentence: ";
    getline(cin, txt);
    
    vector<string> words = split_words(txt);

    for(string word : words) {
        cout << word << endl;
    }

    return 0;
}