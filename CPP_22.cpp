```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::to_string(a[i]) + std::to_string(b[i]) != "1111") {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::vector<int> a, b;
        
        for (int j = 0; j < 4; j++) {
            int num;
            std::cin >> num;
            if (j % 2 == 0) {
                a.push_back(num);
            } else {
                b.push_back(num);
            }
        }
        
        if (!issame(a, b)) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
        }
    }
    
    return 0;
}