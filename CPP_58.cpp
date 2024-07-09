#include <iostream>
#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) 
            return false;
    }
    return true;
}

int main() {
    int n1, n2;
    std::cout << "Enter number of elements in first vector: ";
    std::cin >> n1;
    std::vector<int> l1(n1);
    for(int i = 0; i < n1; i++) 
        std::cin >> l1[i];
    
    std::cout << "Enter number of elements in second vector: ";
    std::cin >> n2;
    std::vector<int> l2(n2);
    for(int i = 0; i < n2; i++) 
        std::cin >> l2[i];

    if(issame(l1, l2)) {
        std::cout << "Vectors are same." << std::endl;
    }
    else
        std::cout << "Vectors are not same." << std::endl;

    return 0;
}