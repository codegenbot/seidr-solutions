#include <iostream>
#include <algorithm>

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    std::vector<int> vec;
    vec.reserve(n);

    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        int temp;
        std::cin >> temp;
        vec.push_back(temp);
    }

    int max_value = *std::max_element(vec.begin(), vec.end()); 

    std::cout << "Maximum element: " << max_value << std::endl;

    return 0;
}