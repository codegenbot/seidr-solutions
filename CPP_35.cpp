```
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> input;
    input.resize(n, 0);

    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        input.push_back(temp);
    }

    std::cout << "Maximum element is: " << *std::max_element(input.begin(), input.end()) << std::endl;

    return 0;
}