#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }
    if (txt.find(',') == string::npos) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((count++) % 2 != 0) {
                    break;
                }
            } else {
                break;
            }
        }
        result.push_back(to_string(count));
    } else {
        string word = "";
        for (char c : txt) {
            if (c == ',') {
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        result.push_back(word);
    }
    return result;
}

int main() {
    // Test cases
    string test1 = "Hello world!";
    string test2 = "Hello,world!";
    string test3 = "abcdef";
    
    vector<string> result1 = split_words(test1);
    vector<string> result2 = split_words(test2);
    vector<string> result3 = split_words(test3);

    cout << "Test 1: ";
    for (string s : result1) {
        cout << s << " ";
    }
    cout << endl;
    
    cout << "Test 2: ";
    for (string s : result2) {
        cout << s << " ";
    }
    cout << endl;
    
    cout << "Test 3: ";
    for (string s : result3) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}