#include <iostream>
#include <vector>
#include <algorithm>

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

int main() {
    std::vector<std::string> input;
    std::cout << "Enter numbers (space separated): ";
    for(long long i; std::cin >> i; ) {
        input.push_back(std::to_string(i));
        if(std::cin.peek() == ' ') 
            std::cin.ignore();
        else
            break;
    }
    int result = can_arrange(input);
    if(result == -1)
        std::cout << "Input cannot be arranged." << std::endl;
    else 
        std::cout << "Input can be arranged." << std::endl;
}