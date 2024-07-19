#include <vector>
#include <string>
#include <algorithm>

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
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
        }
    }
    string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    string rev = reverse(temp);
    if (temp == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

string reverse(string s) {
    return std::string(s.rbegin(), s.rend());
}