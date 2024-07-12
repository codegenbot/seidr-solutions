```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += x;
        }
    }
    result.push_back(temp);
    string reversed = "";
    for (int i = temp.length() - 1; i >= 0; i--) {
        reversed += temp[i];
    }
    if (temp == reversed) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, x));
        }
    }
    string temp = "";
    for (int i = result.size() - 1; i >= 0; i--) {
        temp += result[i];
    }
    vector<string> res2;
    res2.push_back(temp);
    if (temp == s) {
        res2.push_back("True");
    } else {
        res2.push_back("False");
    }
    return res2;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}