#include <bits/stdc++.h>
using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string temp;
    int count = 0;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                temp += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                temp += c;
            } else if (count == 0) {
                result.push_back(temp);
                temp = "";
            }
        }
    }
    return result;
}

int main() {
    return 0;
}