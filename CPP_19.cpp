#include <iostream>
#include <map>
#include <cassert> // Include <cassert> for assert function

using namespace std;

map<string, int> number_map = {
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
    return 0; // Return 0 for successful completion
}

string sort_numbers(string numbers) {
    map<int, string> reverse_map;
    string result = "";

    string current_number = "";
    for (char c : numbers) {
        if (c == ' ') {
            reverse_map[number_map[current_number]] = current_number;
            current_number = "";
        } else {
            current_number += c;
        }
    }
    reverse_map[number_map[current_number]] = current_number;
    
    for (auto it = reverse_map.begin(); it != reverse_map.end(); ++it) {
        result += it->second + " ";
    }
    
    return result;
}