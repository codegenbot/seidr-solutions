```
#include <iostream>
#include <vector>
#include <algorithm>

int can_arrange(std::vector<int> arr) {
    if (arr.empty()) {
        return -1;
    }
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] + 1 != arr[i+1]) {
            return -1;
        }
    }
    return 1;
}

int main() {
    std::vector<int> input;
    int result = can_arrange(input);
    if(result == -1)
        std::cout << "Input cannot be arranged." << std::endl;
    else 
        std::cout << "Input can be arranged." << std::endl;
    return 0;
}