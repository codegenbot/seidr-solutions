```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> nextSmallest(std::vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] != nums[i + 1]) return {nums[i]};
    }
    return {-1};
}

int main() {
    std::vector<int> lst;
    int n;

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    if (n > 0) {
        for(int i = 0; i < n; i++){
            int x;
            std::cout << "Enter integer: ";
            std::cin >> x;
            lst.push_back(x);
        }

        if(lst.size() >= 2) {
            std::sort(lst.begin(), lst.end());
            bool same = true;
            for(int i = 0; i < lst.size() - 1; i++){
                if(lst[i] != lst[i+1]) {
                    std::cout << "Next smallest number is: " << lst[i];
                    return 0;
                }
            }
            if(same) std::cout << "All numbers are the same.";
        } else std::cout << "Please enter more than one number.";
    } else std::cout << "Please enter a positive number.";

    return 0;
}