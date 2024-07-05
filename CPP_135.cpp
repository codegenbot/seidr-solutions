#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr){
    for (int i = arr.size() - 1; i > 0; --i) {
        if (arr[i] < arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> input; 
    int n, num;
    std::cout << "Enter number of elements: ";
    std::cin >> n; 
    std::cout << "Enter elements: ";
    for(int i = 0; i < n; ++i) {
        std::cin >> num;
        input.push_back(num);
    }
    int result = can_arrange(input);
    std::cout << "Result: " << result << std::endl;

    return 0;
}