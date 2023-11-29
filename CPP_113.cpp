#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> odd_count(std::vector<std::string> lst);

std::vector<std::string> odd_count(std::vector<std::string> lst){
    std::vector<std::string> result;
    for(const auto& str : lst) {
        int count = 0;
        for(const auto& c : str) {
            if((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + " in the string \"" + str + "\" of the input.");
    }
    return result;
}

assert(issame(odd_count({"271", "137", "314"}), {
    "the number of odd elements 1 in the string \"271\" of the input.",
    "the number of odd elements 2 in the string \"137\" of the input.",
    "the number of odd elements 1 in the string \"314\" of the input."
}));