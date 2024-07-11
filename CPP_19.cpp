#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

std::string sort_numbers(const std::string& numbers) {
    std::map<std::string, int> number_map = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    std::vector<std::string> words;
    std::stringstream ss(numbers);
    std::string word;
    while (ss >> word) {
        words.push_back(word);
    }

    std::sort(words.begin(), words.end(), [&](const std::string &a, const std::string &b) {
        return number_map[a] < number_map[b];
    });

    std::string result;
    for (const std::string &w : words) {
        result += w + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}