#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cassert>

std::string sort_numbers(std::string numbers) {
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

    std::stringstream ss(numbers);
    std::string word;
    std::vector<std::string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    std::sort(words.begin(), words.end(), [&](const std::string& a, const std::string& b) {
        return number_map[a] < number_map[b];
    });

    std::string result;
    for (const std::string& w : words) {
        result += w + " ";
    }

    return result;
}

int main() {
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

    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");

    return 0;
}