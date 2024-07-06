```cpp
#include <iostream>
#include <vector>
#include <cmath>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        std::cout << "Checking element at index " << i << ": ";
        if(abs(a[i] - b[i]) > 1e-5f) {
            std::cout << "Elements are not same. Difference is: " << abs(a[i] - b[i]) << std::endl;
            return false;
        }
    }
    std::cout << "Elements are the same." << std::endl;
    return true;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> a(n), b(n);
    
    for(int i = 0; i < n; ++i) {
        float x, y;
        std::cin >> x >> y;
        a[i] = x; 
        b[i] = y; 
    }
    
    if(isSame(a, b)) {
        std::cout << "The vectors are identical." << std::endl;
    } else {
        std::cout << "The vectors are not identical." << std::endl;
    }
    
    return 0;
}