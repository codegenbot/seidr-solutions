#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int num : arr) {
        switch (num) {
            case 4:
                result.push_back("Four");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
            default:
                break;
        }
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Four", "Eight"}));

    return 0;
}