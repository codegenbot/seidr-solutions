#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(std::to_string(a[i]) + std::to_string(b[i])).find(std::to_string(a[i])) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::vector<int> a, b;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    for(int i=0; i<n; i++) {
        std::cout << "Enter element of set A: ";
        int x;
        std::cin >> x;
        a.push_back(x);
        
        std::cout << "Enter element of set B: ";
        int y;
        std::cin >> y;
        b.push_back(y);
    }
    
    if(issame(a, b)) {
        std::cout << "The sets are same";
    } else {
        std::cout << "The sets are not the same";
    }
}