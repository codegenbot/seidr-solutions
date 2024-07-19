#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i] == b[i]))
            return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string revResult = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
            revResult += ch;
        }
    }
    reverse(revResult.begin(), revResult.end());
    return {{"True" , result}, (result.size() == revResult.size() ? "True" : "False")};
}

int main() {
    string s, c;
    cout << "Enter the input string: ";
    cin >> s;
    cout << "Enter the character to delete: ";
    cin >> c;
    vector<string> output = reverse_delete(s,c);
    for (const auto& str : output) {
        cout << str << endl;
    }
    return 0;
}