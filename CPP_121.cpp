```cpp
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i += 2) {
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
    for (int i = 1; i <= n; i++) {
        std::cout << "Enter element " << i << ": ";
        int x;
        std::cin >> x;
        lst.push_back(x);
    }
    int result = solutions(lst);
    std::cout << "Sum of odd elements: " << result << std::endl;
    return 0;
}