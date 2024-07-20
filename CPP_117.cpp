```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') <= n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') <= n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    cout << "select_words(\"Mary had a little lamb\", 4) ==> \"";
    for (string s : select_words("Mary had a little lamb", 4)) {
        cout << "\"" << s << "\",";
    }
    cout << endl;
    cout << "select_words(\"Mary had a little lamb\", 3) ==> {";
    for (string s : select_words("Mary had a little lamb", 3)) {
        cout << "\"" << s << "\",";
    }
    cout << endl;
    cout << "select_words('simple white space', 2) ==> {";
    for (string s : select_words("simple white space", 2)) {
        cout << "\"" << s << "\",";
    }
    cout << endl;
    cout << "select_words(\"Hello world\", 4) ==> {";
    for (string s : select_words("Hello world", 4)) {
        cout << "\"" << s << "\",";
    }
    cout << endl;
    cout << "select_words(\"Uncle sam\", 3) ==> {";
    for (string s : select_words("Uncle sam", 3)) {
        cout << "\"" << s << "\",";
    }
    cout << endl;
    return 0;
}