#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> sortedList = lst;
    std::sort(sortedList.begin(), sortedList.end());
    int smallest = sortedList[0];
    for (int num : sortedList) {
        if (num > smallest) {
            return num;
        }
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9};
    int result = next_smallest(numbers);
    std::cout << "Next smallest number is: " << result << std::endl;
    return 0;
}