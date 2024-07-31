```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> input;
    int result = can_arrange(input);
    if(result == -1)
        std::cout << "Input cannot be arranged." << std::endl;
    else 
        std::cout << "Input can be arranged." << std::endl;
    return 0;

    int can_arrange(std::vector<std::string> arr) {
        if (arr.empty()) {
            return -1;
        }
        std::sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; i++) {
            if (std::stoi(arr[i]) + 1 != std::stoi(arr[i+1])) {
                return -1;
            }
        }
        return 1;
    }
}