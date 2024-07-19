#include <iostream>
#include <map>
#include <string>
#include <cassert>

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

string sort_numbers(string numbers) {
    map<int, string> reverse_map;
    string result = "";
    
    string temp = "";
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
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}