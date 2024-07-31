#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cassert>

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

std::string sort_numbers(std::string numbers);

int main() {
    // Add any necessary code for testing or calling the sort_numbers function
}

std::string sort_numbers(std::string numbers){
    std::map<int, std::string> rev_num_map;
    for(auto it : num_map){
        rev_num_map[it.second] = it.first;
    }

    std::vector<int> sorted_nums;
    std::stringstream ss(numbers);
    std::string token;
    while (ss >> token){
        sorted_nums.push_back(num_map[token]);
    }

    std::sort(sorted_nums.begin(), sorted_nums.end());

    std::string result;
    for(auto num : sorted_nums){
        result += rev_num_map[num] + " ";
    }

    return result;
}