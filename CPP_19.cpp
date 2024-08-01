#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::string sort_numbers(std::string numbers) {
    std::vector<std::string> words = {"zero", "one", "two", "three", "four", "five", "six"};
    std::vector<std::string> input;
    std::string word;
    for (char c : numbers) {
        if (c == ' ') {
            input.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    input.push_back(word);
    std::sort(input.begin(), input.end(), [&](const std::string &a, const std::string &b) {
        return std::find(words.begin(), words.end(), a) < std::find(words.begin(), words.end(), b);
    });
    std::string result;
    for (const std::string &w : input) {
        result += w + " ";
    }
    result.pop_back(); // remove extra space at the end
    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}