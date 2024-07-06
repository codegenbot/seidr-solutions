```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> lst;
    int sum = 0;

    // Ask for the input from user
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    // Take the actual input
    for(int i=1; i<=n; i++) {
        int temp;
        std::cout << "Enter element " << i << ": ";
        std::cin >> temp;
        lst.push_back(temp);
    }

    // Now, we need to add those numbers which are at odd position.
    for (int i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0)
            sum += lst[i];
    }
    
    std::cout << "Sum of even positioned elements: " << sum << std::endl;
    return 0;
}