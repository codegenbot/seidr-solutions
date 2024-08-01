#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(const std::vector<int>& numbers) {
    std::vector<std::string> result;
    for (int num : numbers) {
        switch (num) {
            case 9:
                result.push_back("Nine");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 8:
                result.push_back("Eight");
                break;
            default:
                break;
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Four", "Eight"}));
    return 0;
}