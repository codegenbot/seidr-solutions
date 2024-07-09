```cpp
#include <iostream>
#include <vector>
#include <limits>

bool filter_integers(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() { 
    int n;
    if (!(std::cin >> n)) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1; 
    }

    std::vector<int> a;
    std::vector<int> b;

    for(int i = 0; i < n; ++i) {
        int x;
        if (!(std::cin >> x)) {
            std::cerr << "Invalid input. Please enter an integer." << std::endl;
            return 1; 
        }
        a.push_back(x);
    }

    for(int i = 0; i < n; ++i) {
        int x;
        if (!(std::cin >> x)) {
            std::cerr << "Invalid input. Please enter an integer." << std::endl;
            return 1; 
        }
        b.push_back(x);
    }

    if (filter_integers(a, b))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;

    return 0;
}