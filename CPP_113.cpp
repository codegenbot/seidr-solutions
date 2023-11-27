#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> odd_count(const std::vector<std::string>& lst) {
    std::vector<std::string> result;
    for(const std::string& s : lst){
        int count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        result.push_back("The number of odd elements in the string " + s + " is " + std::to_string(count) + " out of " + std::to_string(s.length()) + " characters.");
    }
    return result;
}