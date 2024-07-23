#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    std::cout << "Count: " << count << std::endl;
    return 0;
}