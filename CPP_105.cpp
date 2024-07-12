#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> byLength(std::initializer_list<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if (length == 4) {
            result.push_back("Four");
        } else if (length == 8) {
            result.push_back("Eight");
        } else if (length == 9) {
            result.push_back("Nine");
        }
    }
    return result;
}

int main() {
    assert(isSame(byLength({4, 8, 9}), {"Four", "Eight", "Nine"}));
}