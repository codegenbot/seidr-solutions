#include <vector>
#include <algorithm>

int next_smallest(std::vector<int>& lst) {
    if (lst.size() < 2) return -1;
    std::sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int num : lst) {
        if (num > smallest) return num;
    }
    return -1;
}

int main() {
    std::vector<int> input = {5, 3, 8, 1, 4};
    int result = next_smallest(input);
    return 0;
}