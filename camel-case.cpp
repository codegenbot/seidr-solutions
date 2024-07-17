#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string str) {
    vector<string> words;
    string temp = "";
    for (char c : str) {
        if (c == '-') {
            words.push_back(temp);
            temp = "";
        } else if (c == ' ') {
            if (!temp.empty()) {
                words.push_back(temp);
                temp = "";
            }
        } else {
            temp += tolower(c);
        }
    }
    if (!temp.empty())
        words.push_back(temp);

    string result;
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += char(toupper(words[i][0]));
        else
            result += words[i];
    }

    return result;
}

int main() {
    int numCases;
    cin >> numCases;
    for (int caseNum = 1; caseNum <= numCases; ++caseNum) {
        string str;
        cin >> str;
        cout << "Case " << caseNum << ": " << camelCase(str) << endl;
    }
    return 0;
}