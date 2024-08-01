#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cassert>

std::string sort_numbers(const std::string& input) {
    std::istringstream iss(input);
    std::vector<std::string> tokens;
    std::string token;
    
    while (iss >> token) {
        tokens.push_back(token);
    }
    
    std::sort(tokens.begin(), tokens.end());
    
    std::ostringstream oss;
    for (const auto& t : tokens) {
        oss << t << " ";
    }
    
    return oss.str();
}

int main() {
    assert(sort_numbers("six five four three two one zero") ==
           "zero one two three four five six");
    
    return 0;
}