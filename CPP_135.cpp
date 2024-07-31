```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> input;
    std::cout << "Enter numbers (space separated): ";
    for(int i; std::cin >> i; ) {
        input.push_back(i);
        if(std::cin.peek() == ' ') 
            std::cin.ignore();
        else
            break;
    }
    std::vector<std::string> strInput;
    for (int num : input) {
        strInput.push_back(std::to_string(num));
    }
    int result = can_arrange(strInput);
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