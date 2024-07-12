#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(const std::string& s1, const std::string& s2) {
    std::vector<std::string> result;
    for (char c : s1) {
        if (!s2.find(std::to_string(c))) {
            result.push_back(std::to_string(c));
        }
    }
    return result;
}

int main() {
    std::string str;
    std::vector<std::string> v = {"", "True"};
    assert(issame(reverse_delete("mamma", "mia"), reverse_delete(v[0], v[1]).c_str()));
    return 0;
}