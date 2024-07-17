#include <iostream>
#include <vector>

int basement() {
    const int MAX_ELEMENTS = 100;
    std::vector<int> nums;
    int num;
    
    for (int i = 0; i < MAX_ELEMENTS; ++i) {
        if (!(std::cin >> num)) {
            break;
        }
        nums.push_back(num);
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int result = basement();
    std::cout << result << std::endl;
    return 0;
}