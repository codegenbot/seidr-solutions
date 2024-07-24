#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

void filter_by_substring(std::vector<std::string>& vec, const std::string& sub){
    vec.erase(std::remove_if(vec.begin(), vec.end(), [sub](const std::string& s){
        return s.find(sub) == std::string::npos;
    }), vec.end());
}

int main() {
    std::vector<std::string> vec = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> expected = {"grunt", "prune"};

    std::vector<std::string> temp_vec = {"grunt", "trumpet", "prune", "gruesome"};
    filter_by_substring(temp_vec, "run");

    assert(issame(temp_vec, expected));

    std::vector<std::string> input_vec = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> output_vec = {"grunt", "prune"};
    filter_by_substring(input_vec, "run");
    assert(issame(input_vec, output_vec));

    return 0;
}