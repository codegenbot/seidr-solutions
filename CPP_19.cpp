#include <iostream>
#include <map>
#include <string>
#include <cassert>

map<string, int> num_map = {
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

string sort_numbers(string numbers){
    map<int, string> rev_map;
    for(auto const& pair : num_map){
        rev_map[pair.second] = pair.first;
    }
    
    string result = "";
    size_t pos = 0;
    while((pos = numbers.find(" ")) != string::npos){
        string token = numbers.substr(0, pos);
        numbers.erase(0, pos + 1);
        result += rev_map[num_map[token]] + " ";
    }
    result += rev_map[num_map[numbers]];
    
    return result;
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    
    return 0;
}