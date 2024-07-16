#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string reverseTemp = temp;
    reverse(temp.begin(), temp.end());
    if (temp == reverseTemp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}