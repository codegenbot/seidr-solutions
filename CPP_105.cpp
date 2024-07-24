#include <vector>
#include <string>

std::vector<std::string> by_length(const std::vector<int>& lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if (length == 1)
            result.push_back("One");
        else if (length == 4)
            result.push_back("Four");
        else if (length == 9)
            result.push_back("Nine");
        else if (length == 2)
            result.push_back("Two");
        else if (length == 3)
            result.push_back("Three");
        else if (length == 5)
            result.push_back("Five");
        else if (length == 6)
            result.push_back("Six");
        else if (length == 7)
            result.push_back("Seven");
        else if (length == 8)
            result.push_back("Eight");
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(by_length({1, 4, 9}), std::vector<std::string>{ "One", "Four", "Nine"}));
    return 0;
}