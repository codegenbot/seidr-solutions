#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <assert.h>

using namespace std;

string sort_numbers(string numbers);

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

string sort_numbers(string numbers) {
    string result = "";
    map<int, string> rev_num_map;
    
    for (auto const& pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }
    
    vector<int> sorted_nums;
    stringstream ss(numbers);
    string word;
    while (ss >> word) {
        sorted_nums.push_back(num_map[word]);
    }
    
    sort(sorted_nums.begin(), sorted_nums.end());
    
    for (int num : sorted_nums) {
        result += rev_num_map[num] + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");

    string input_numbers;
    getline(std::cin, input_numbers);
    
    std::cout << sort_numbers(input_numbers) << std::endl;
    
    return 0;
}