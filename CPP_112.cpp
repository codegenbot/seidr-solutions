#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& vecB) {
    if (v1.size() != vecB.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != vecB[i]) return false;
    }
    return true;
}

std::vector<std::string> reverseDelete(std::string s, std::string c) {
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
    return {temp, (temp == std::string(temp).reverse()) ? "True" : "False"};
}

int main() {
    assert(issame({ "", "True" }, reverseDelete("mamma", "mia")));
    std::cout << (issame({ "", "True" }, reverseDelete("mamma", "mia")) ? "Test passed." : "Test failed.") << std::endl;
    return 0;
}