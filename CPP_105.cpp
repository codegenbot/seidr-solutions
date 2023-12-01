#include <vector>
#include <string>
#include <algorithm>
#include <map>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> result;
    std::vector<int> sorted_arr;
    std::map<int, std::string> digit_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    // Sort the integers between 1 and 9 inclusive
    for(int num : arr){
        if(num >= 1 && num <= 9){
            sorted_arr.push_back(num);
        }
    }
    std::sort(sorted_arr.begin(), sorted_arr.end());

    // Reverse the resulting vector
    std::reverse(sorted_arr.begin(), sorted_arr.end());

    // Replace each digit by its corresponding name
    for(int num : sorted_arr){
        result.push_back(digit_map[num]);
    }

    return result;
}