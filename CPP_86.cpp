#include <algorithm>
#include <string>
using namespace std;

string anti_shuffle(string sStr) {
    string result = "";
    for (int i = 0; i < sStr.length(); i++) {
        if (sStr[i] == ' ') {
            result += " ";
        } else {
            string word;
            for (int j = i; j < sStr.length() && sStr[j] != ' '; j++) {
                word += sStr[j];
            }
            sort(word.begin(), word.end());
            result += word;
            i = j - 1;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Anti-shuffled sentence: " << anti_shuffle(str) << endl;
    return 0;
}