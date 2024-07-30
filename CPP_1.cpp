#include <vector>
#include <string>
#include <sstream>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::stringstream ss(paren_string);
    std::string temp;
    while (getline(ss, temp, '(')) {
        if (temp.empty()) continue;
        temp = "(" + temp;
        size_t pos = temp.find(')');
        if (pos != std::string::npos) {
            result.push_back(temp.substr(0, pos + 1));
            if (pos + 1 < temp.size()) {
                result.push_back(temp.substr(pos + 1));
            }
        }
    }
    return result;
}

int main() {
    auto result = separate_paren_groups("( ) (( )) (( )( ))");
    assert(issame(result, { "()", "(())", "(()())" }));
    return 0;
}