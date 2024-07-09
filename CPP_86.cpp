#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    string temp = "";
    
    for (char c : s) {
        if (c == ' ') {
            result += temp;
            temp = "";
            result += ' ';
        } else {
            if (!temp.empty()) {
                for (int i = 0; i < temp.size(); i++) {
                    char ch = temp[i];
                    bool found = false;
                    for (int j = 0; j <= c - 'a'; j++) {
                        if (ch == j + 'a') {
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        result += ch;
                    }
                }
            } else {
                for (int i = 0; i <= c - 'a'; i++) {
                    result += i + 'a';
                }
            }
            temp = "";
        }
    }
    
    if (!temp.empty()) {
        for (int i = 0; i < temp.size(); i++) {
            char ch = temp[i];
            bool found = false;
            for (int j = 0; j <= c - 'a'; j++) {
                if (ch == j + 'a') {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result += ch;
            }
        }
    } else {
        for (int i = 0; i <= c - 'a'; i++) {
            result += i + 'a';
        }
    }
    
    return result;
}