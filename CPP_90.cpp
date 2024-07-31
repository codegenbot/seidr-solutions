#include <vector>

int next_smallest(std::vector<int> lst){
    if (lst.size() < 2) {
        return -1;
    }
    std::vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    int smallest = sorted_lst[0];
    for (int num : sorted_lst) {
        if (num > smallest) {
            return num;
        }
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int result = next_smallest(numbers);
    return 0;
}