#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    
    std::vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst[i];
    }
    
    int result = solution(lst);
    std::cout << "Sum of elements at even positions and not divisible by 2: " << result << std::endl;
    
    return 0;
}