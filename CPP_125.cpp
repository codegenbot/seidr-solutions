#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;
    
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') == string::npos)
                return {to_string(count(txt.begin(), txt.end(), c))};
            pos = txt.find(',');
        }
        result.push_back(txt.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }
    
    result.push_back(txt.substr(prevPos));
    
    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);
    vector<string> res = split_words(txt);
    for (auto& s : res) {
        cout << s << endl;
    }
    return 0;
}