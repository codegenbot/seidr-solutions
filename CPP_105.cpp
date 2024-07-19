#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    std::vector<int> filtered_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }
    std::sort(filtered_arr.begin(), filtered_arr.end());
    std::reverse(filtered_arr.begin(), filtered_arr.end());
    std::vector<std::string> result;
    for (int num : filtered_arr) {
        result.push_back(names[num - 1]);
    }
    return result;
}

int main(){
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    std::cout << "All test cases passed successfully." << std::endl;
    return 0;
}