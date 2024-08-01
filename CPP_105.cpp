#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(const std::vector<int>& input) {
    std::vector<std::string> result;
    for (int i : input) {
        if (i == 1)
            result.push_back("One");
        else if (i == 2)
            result.push_back("Two");
        else if (i == 3)
            result.push_back("Three");
        else if (i == 4)
            result.push_back("Four");
        else if (i == 7)
            result.push_back("Seven");
        else if (i == 9)
            result.push_back("Nine");
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    std::vector<int> arr = {3, 1, 7, 4, 2, 9};
    std::vector<std::string> expected_result = {"Nine", "Seven", "Four", "Three", "Two", "One"};

    std::vector<std::string> result = by_length(arr);

    assert(issame(result, expected_result));

    return 0;
}