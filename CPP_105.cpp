#include <vector>
#include <string>

std::vector<std::string> by_length(const std::vector<int>& lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        switch (length) {
            case 1:
                result.push_back("One");
                break;
            case 2:
            case 3:
            case 4:
                if (length == 4)
                    result.push_back("Four");
                else
                    result.push_back(std::to_string(length));
                break;
            default:
                result.push_back(std::to_string(length));
                break;
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(by_length({1, 4, 9}), {"One", "Four", "Nine"}));
    return 0;
}