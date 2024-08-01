#include <vector>

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
    std::vector<int> numbers = {5, 3, 7, 1, 9};
    int result = next_smallest(numbers);
    return 0;
}