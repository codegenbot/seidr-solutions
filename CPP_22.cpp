```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!issamehelper(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

bool issamehelper(int a, int b) {
    std::string str1 = std::to_string(a);
    std::string str2 = std::to_string(b);
    
    return (str1 == str2);
}

int main() {
    std::vector<int> vec1;
    std::cout << "Enter the size of vector 1: ";
    int n1;
    std::cin >> n1;
    for(int i=0; i<n1; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        int x;
        std::cin >> x;
        vec1.push_back(x);
    }
    
    std::vector<int> vec2;
    std::cout << "Enter the size of vector 2: ";
    int n2;
    std::cin >> n2;
    for(int i=0; i<n2; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        int y;
        std::cin >> y;
        vec2.push_back(y);
    }
    
    if(issame(vec1,vec2))
        std::cout << "Vectors are same."<<std::endl;
    else
        std::cout << "Vectors are not same."<<std::endl;

    return 0;
}