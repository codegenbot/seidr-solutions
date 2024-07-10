```cpp
#include <iostream>
#include <vector>

int count_nums(std::vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; // make the number positive for calculation
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> v;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        v.push_back(num);
    }
    
    int result = count_nums(v);
    std::cout << "Numbers with positive sum of digits: " << result << std::endl;
    
    return 0;
}