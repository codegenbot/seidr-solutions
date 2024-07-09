#include <iostream>
#include <vector>

long double_the_difference(const std::vector<int>& input);

int main() {
    int n;
    long odd_sum = 0;
    std::vector<int> input;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        if(num > 0) { 
            input.push_back(num);
            odd_sum += num * num; 
        }
    }
    long result = (long)input.size() * (long)input.size() - odd_sum;
    std::cout << "The total sum of squares is: " << static_cast<int>(result) << std::endl;
}

long double_the_difference(const std::vector<int>& input) {
    return 0; 
}