#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <cassert>

std::string sort_numbers(const std::string& numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}

std::string sort_numbers(const std::string& numbers) {
    std::stringstream ss(numbers);
    std::unordered_map<std::string, int> num_map {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}
    };

    std::vector<std::string> num_vec;
    std::string word;
    while (ss >> word) {
        num_vec.push_back(word);
    }

    std::sort(num_vec.begin(), num_vec.end(), [&](const std::string& a, const std::string& b) {
        return num_map[a] < num_map[b];
    });

    std::string sorted;
    for (const auto& num : num_vec) {
        sorted += num + " ";
    }

    return sorted.substr(0, sorted.size() - 1);
}