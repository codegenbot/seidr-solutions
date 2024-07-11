```
#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;

}

int main() {
    std::vector<int> numbers;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }
    
    int threshold;
    std::cout << "Enter the threshold: ";
    std::cin >> threshold;
    
    if(below_threshold(numbers, threshold)) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }
}