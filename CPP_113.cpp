#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> odd_count(const std::vector<std::string>& lst) {
    std::vector<std::string> result;
    
    for (const std::string& s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        
        std::string output = "the number of odd elements " + std::to_string(count) + " in the string " + s + " of the input.";
        result.push_back(output);
    }
    
    return result;
}

int main() {
    // Test the function
    assert (odd_count({"271", "137", "314"}) == std::vector<std::string>{
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    });
    
    std::cout << "All tests passed successfully." << std::endl;
    
    return 0;
}