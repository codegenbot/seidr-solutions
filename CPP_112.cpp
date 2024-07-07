```cpp
#include <vector>
#include <string>
#include <algorithm>

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
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    auto vec1 = a;
    auto vec2 = b;
    return vec1.size() == vec2.size() && std::equal(vec1.begin(), vec1.end(), vec2.begin());
}

int main() {
    if (!issame({reverse_delete("mamma", "mia"), {"", "True"}}, {{"", "True"}}))
        return 1;
    return 0;
}