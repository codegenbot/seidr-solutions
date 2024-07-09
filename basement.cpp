```cpp
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) { 
            return i+1; 
        }
    }
    return -1;

}

int main() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    int result = basement(nums);
    if(result == -1) {
        std::cout << "No such index exists.\n";
    } else {
        std::cout << "The first index where the sum becomes negative is: " << result << "\n";
    }
    return 0;
}