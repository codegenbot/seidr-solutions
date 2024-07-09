```cpp
#include <iostream>
#include <vector>

int sumOdd(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int solutions(std::vector<int> lst) { 
    int sum = sumOdd(lst);
    for (int i : lst) {
        if (i % 2 == 0 && i > 0)
            sum -= i; 
    }
    return sum;
}

int main() {
    int arr[] = {3, 13, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    assert(solutions(std::vector<int>(arr, arr + size)) == 25);
    std::cout << "Test passed.\n";
}