#include <vector>
#include <iostream>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) {
        return 0;
    }
    std::sort(lst.begin(), lst.end());
    return lst[1];
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        lst.push_back(num);
    }
    int result = next_smallest(lst);
    std::cout << "The next smallest element is: " << result << std::endl;
    return 0;
}