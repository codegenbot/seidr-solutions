#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int num : lst) {
        if (num > smallest) {
            return num;
        }
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {5, 3, 8, 2, 7};
    int result = next_smallest(numbers);
    std::cout << "Next smallest number is: " << result << std::endl;
    return 0;
}