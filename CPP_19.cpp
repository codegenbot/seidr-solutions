#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cassert>

int main() {
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

    string sort_numbers(string numbers, const map<string, int>& number_map) {
        stringstream ss(numbers);
        string word;
        vector<string> words;
        
        while (ss >> word) {
            words.push_back(word);
        }
        
        sort(words.begin(), words.end(), [&](const string& a, const string& b) {
            return number_map[a] < number_map[b];
        });
        
        string result;
        for (const string& w : words) {
            result += w + " ";
        }
        
        return result;
    }

    assert(sort_numbers("six five four three two one zero", number_map) == "zero one two three four five six");
    
    return 0;
}