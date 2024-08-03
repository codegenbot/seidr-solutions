#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return {"False"};
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return {"False"};
    }
    return {"True"};
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
    std::string revTemp = temp;
    std::reverse(revTemp.begin(), revTemp.end());
    result.push_back((temp == revTemp) ? "True" : "False");
    return result;
}

int main() {
    std::cout << issame(reverse_delete("abc", "b"), {"ac", "True"}) << std::endl;
    return 0;
}