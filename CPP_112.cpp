#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(char a, char b) {
    if (a == 'S' && b == 'S') {
        return true;
    } else if (a == 'M' && b == 'M') {
        return true;
    } else if (a == 'L' && b == 'L') {
        return true;
    }
    return false;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char i : s) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += i;
        }
    }
    result.push_back(temp);
    string rev = temp;
    reverse(rev.begin(), rev.end());
    if (temp == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    // Your code here
    return 0;
}