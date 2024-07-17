#include <iostream>
#include <vector>
#include <string>

int main() {
    int text = 10920; 
    int target = 346266;
    
    std::vector<int> result;
    for (int i = 0; i <= text - target; i++) {
        if (std::to_string(text).substr(i, std::to_string(target).size()) == std::to_string(target)) {
            result.push_back(i);
        }
    }

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}