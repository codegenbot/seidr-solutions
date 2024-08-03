```cpp
#include <vector>
#include <iostream>

bool below_threshold(std::vector<int> l, int t);

int main() {
    std::vector<int> l;
    int n, t;
    
    // Read the number of elements.
    std::cin >> n;

    // Read each element.
    for(int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        l.push_back(x);
    }

    // Read the threshold value.
    std::cin >> t;

    if (below_threshold(l, t)) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "At least one number is not below the threshold." << std::endl;
    }

    return 0;
}

bool below_threshold(std::vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;
}