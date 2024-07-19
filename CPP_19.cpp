#include <map>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

std::map<std::string, int> num_map = {
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

std::string sort_numbers(std::string numbers){
    std::map<int, std::string> rev_num_map;
    for(auto const& pair : num_map){
        rev_num_map[pair.second] = pair.first;
    }

    std::vector<int> sorted_nums;
    std::stringstream ss(numbers);
    std::string num;
    while(ss >> num){
        sorted_nums.push_back(num_map[num]);
    }

    std::sort(sorted_nums.begin(), sorted_nums.end());

    std::string result;
    for(int num : sorted_nums){
        result += rev_num_map[num] + " ";
    }

    result.pop_back(); // Remove extra space at the end
    return result;
}

int main(){
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    
    return 0;
}