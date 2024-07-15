#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
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

string sort_numbers(string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
}

string sort_numbers(string numbers){
    map<int, string> reverse_map;
    for(auto const& pair : number_map){
        reverse_map[pair.second] = pair.first;
    }
    
    vector<int> nums;
    stringstream ss(numbers);
    string num;
    while(ss >> num){
        nums.push_back(number_map[num]);
    }
    
    sort(nums.begin(), nums.end());
    
    string result;
    for(int n : nums){
        result += reverse_map[n] + " ";
    }
    
    return result.substr(0, result.size() - 1);
}