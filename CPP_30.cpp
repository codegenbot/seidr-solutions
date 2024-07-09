```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <iostream>

bool same(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> vec;
    for(int i=0; i<n; i++) {
        float num;
        std::cin >> num;
        vec.push_back(num);
    }

    std::cout << "Original Vector: ";
    for(float x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::vector<float> pos = get_positive(vec);
    
    std::cout << "Vector with positive numbers: ";
    for(float x : pos) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    if(same(vec, pos)) {
        std::cout << "Both vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }

    return 0;
}