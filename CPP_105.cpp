#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::pair<std::string, int>> by_length(std::vector<int> numbers) {
    std::vector<std::pair<std::string, int>> result;
    for (int i : numbers) {
        if (i % 2 == 0)
            result.push_back({std::to_string(i), i});
    }
    return result;
}

int main() {
    std::vector<int> numbers = {9, 4, 8};
    assert(issame(by_length(numbers), {{"Nine", 9}, {"Four", 4}, {"Eight", 8}}));
    return 0;
}