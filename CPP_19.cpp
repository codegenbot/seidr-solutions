#include <string>
#include <map>
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
    string result = "";
    map<int, string> rev_map;
    
    for (string::size_type pos = 0; pos < numbers.size();){
        string word = "";
        while (pos < numbers.size() && numbers[pos] != ' '){
            word += numbers[pos];
            pos++;
        }
        pos++;
        rev_map[num_map[word]] = word;
    }
    
    for (auto const& pair : rev_map){
        result += pair.second + " ";
    }
    
    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    
    return 0;
}