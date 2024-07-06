```cpp
#include<vector>
#include<iostream>

int solutions(std::vector<int> lst);

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
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
        std::cout << "Enter element " << i+1 << ": ";
        int val;
        std::cin >> val;
        lst.push_back(val);
    }
    std::cout << "The sum of the elements at even indices is: " << solutions(lst) << std::endl;
    return 0;
}