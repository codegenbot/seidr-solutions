#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int num : lst) {
        if (num > smallest) {
            return num;
        }
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 6};
    int result = next_smallest(numbers);
    std::cout << "Next smallest number: " << result << std::endl;
    return 0;
}