#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> to_be) {
    if (a.size() != to_be.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != to_be[i]) return false;
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> numbers) {
    std::vector<std::string> result;
    for (int num : numbers) {
        switch (num) {
            case 1: result.push_back("One"); break;
            case 4: result.push_back("Four"); break;
            case 9: result.push_back("Nine"); break;
            default: result.push_back("Invalid Number");
        }
    }
    return result;
}

int main() {
    assert(issame(by_length({1, 4, 9}), {"One", "Four", "Nine"}));
    return 0;
}