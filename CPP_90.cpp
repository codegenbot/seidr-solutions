#include <iostream>
#include <vector>

int next_smallest(const vector<int>& lst) {
    if (lst.size() < 2) {
        return -1;
    }
    
    int smallest = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > smallest) {
            return lst[i];
        }
    }
    
    return -1;
}

int main() {
    std::vector<int> numbers = {5, 3, 8, 2, 7};
    int result = next_smallest(numbers);
    std::cout << "Next smallest number from the list: " << result << std::endl;

    return 0;
}