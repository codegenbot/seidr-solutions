```cpp
#include <iostream>
#include <vector>

bool checkVectorEquality(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        std::cout << "Error: The two vectors must be the same size." << std::endl;
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            std::cout << "Error: The two vectors are not the same." << std::endl;
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> vec1;
    int n;
    std::cout << "Enter the number of elements for both vectors: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        vec1.push_back(x);
    }

    std::vector<int> vec2;
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        vec2.push_back(x);
    }

    if(checkVectorEquality(vec1,vec2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }

    return 0;
}