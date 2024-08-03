```
#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        lst.push_back(x);
    }
    int result = solution(lst);
    std::cout << "Sum of odd numbers: " << result << std::endl;
    return 0;
}