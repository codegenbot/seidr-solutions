#include <iostream>
#include <vector>

int solution(vector<int> lst) {
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
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": ";
        int val;
        std::cin >> val;
        lst.push_back(val);
    }
    std::cout << "Sum of odd elements: " << solution(lst) << std::endl;
    return 0;
}