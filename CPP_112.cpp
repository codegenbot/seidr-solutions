#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
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
    std::string revTemp = temp;
    std::reverse(revTemp.begin(), revTemp.end());
    if (temp == revTemp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    assert(std::vector<std::string>(reverse_delete("mamma", "mia")) == std::vector<std::string>{ "", "True" });
    return 0;
}