#include <vector>
#include <iostream>

int add(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> lst = {4, 4, 6, 8};
    std::cout << add(lst) << std::endl; // prints 12
    return 0;
}