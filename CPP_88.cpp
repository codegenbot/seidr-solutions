#include <iostream>
#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) {
        return array;
    }

    std::sort(array.begin(), array.end(), [](int a, int b) {
        return (!issame(a,b));
    });

    return array;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> array(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> array[i];
    }

    sort_array(array);

    for (int x : array) {
        std::cout << x << " ";
    }
    
    return 0;
}