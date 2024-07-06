```c++
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> same(std::string s, std::string c) {
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
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

int main() {
    std::vector<std::string> result = same("mamma", "mia");
    assert(result[0].empty() && result[1] == "True");
    return 0;
}