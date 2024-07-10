#include <iostream>
#include <map>
#include <string>

using namespace std;

std::map<std::string, int> numeral_map = {
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

string sort_numbers(string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
}

string sort_numbers(string numbers) {
    std::map<int, std::string> reverse_map;
    string result = "";

    size_t start = 0, end = numbers.find(" ");
    while (end != std::string::npos) {
        std::string num_str = numbers.substr(start, end - start);
        reverse_map[numeral_map[num_str]] = num_str;
        start = end + 1;
        end = numbers.find(" ", start);
    }

    std::string num_str = numbers.substr(start);
    reverse_map[numeral_map[num_str]] = num_str;

    for (const auto& pair : reverse_map) {
        result += pair.second + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}