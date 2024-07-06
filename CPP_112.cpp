```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool same(vector<string> v1, vector<string> v2) {
    return v1 == v2;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
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
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    if (temp == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    std::vector<std::string> result = reverse_delete("mamma", "mia");
    assert(same({result[0], (result.size() == 2) ? (result[1] == "True") ? "True" : "False" : "")}, {"", "True"});
    return 0;
}