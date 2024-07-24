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
    filter_by_substring(vec, "run");
    assert(issame(vec, expected));
    return 0;
}