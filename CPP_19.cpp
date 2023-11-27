#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cassert>

std::string sort_numbers(std::string numbers){
    std::map<std::string, int> num_map;
    num_map["zero"] = 0;
    num_map["one"] = 1;
    num_map["two"] = 2;
    num_map["three"] = 3;
    num_map["four"] = 4;
    num_map["five"] = 5;
    num_map["six"] = 6;
    num_map["seven"] = 7;
    num_map["eight"] = 8;
    num_map["nine"] = 9;

    std::vector<int> sorted_nums;
    std::stringstream ss(numbers);
    std::string num_str;
    while (ss >> num_str) {
        sorted_nums.push_back(num_map[num_str]);
    }
    std::sort(sorted_nums.begin(), sorted_nums.end());
    
    std::string sorted_str;
    for (int num : sorted_nums) {
        for (auto it = num_map.begin(); it != num_map.end(); ++it) {
            if (it->second == num) {
                sorted_str += it->first + " ";
                break;
            }
        }
    }
    sorted_str.pop_back(); // Remove the trailing space
    
    return sorted_str;
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");

    return 0;
}