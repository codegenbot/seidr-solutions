#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> sortedList = lst;
    std::sort(sortedList.begin(), sortedList.end());

    int count = 1;
    for (int i = 1; i < sortedList.size(); ++i) {
        if (sortedList[i] > sortedList[i - 1]) {
            count++;
        }
        if (count == 2) {
            return sortedList[i];
        }
    }
    return -1;
}

int main() {
    std::vector<int> test1 = {3, 7, 2, 10, 4};
    assert(next_smallest(test1) == 3);

    std::vector<int> test2 = {5, 5, 5, 5, 5};
    assert(next_smallest(test2) == -1);

    std::vector<int> test3 = {1, 2, 3, 4, 5};
    assert(next_smallest(test3) == 2);

    return 0;
}