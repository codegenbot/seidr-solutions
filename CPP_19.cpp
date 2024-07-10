#include <iostream>
#include <map>

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

std::string sort_numbers(std::string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
}

std::string sort_numbers(std::string numbers) {
    std::map<int, std::string> reverse_map;
    std::string result;
    
    std::string temp;
    for (char c : numbers) {
        if (c == ' ') {
            reverse_map[number_map[temp]] = temp;
            temp = "";
        } else {
            temp += c;
        }
    }
    reverse_map[number_map[temp]] = temp;
    
    for (auto it = reverse_map.begin(); it != reverse_map.end(); ++it) {
        result += it->second + " ";
    }
    
    return result;
}