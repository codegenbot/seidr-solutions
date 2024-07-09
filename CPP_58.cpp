````
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int m1, n1, m2, n2;
    std::cout << "Enter number of elements in list 1: ";
    std::cin >> m1;
    std::cout << "Enter the elements of list 1: ";
    std::vector<int> v1(m1);
    for(int i=0; i<m1; i++) {
        std::cin >> v1[i];
    }
    
    std::cout << "Enter number of elements in list 2: ";
    std::cin >> n2;
    std::cout << "Enter the elements of list 2: ";
    std::vector<int> v2(n2);
    for(int i=0; i<n2; i++) {
        std::cin >> v2[i];
    }
    
    if(issame(v1, v2)) {
        std::cout << "Lists are same" << std::endl;
    } else {
        std::vector<int> common = common(v1, v2);
        for(int num : common) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}

```