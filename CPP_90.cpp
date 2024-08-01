#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> sortedList = lst;
    std::sort(sortedList.begin(), sortedList.end());
    int count = 1;
    for (int i = 1; i < sortedList.size(); ++i) {
        if (sortedList[i] > sortedList[i-1]) {
            count++;
        }
        if (count == 2) {
            return sortedList[i];
        }
    }
    return -1;
}

int main() {
    std::cout << next_smallest({-35, 34, 12, -45}) << std::endl;
    return 0;
}