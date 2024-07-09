```cpp
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

bool issame(vector<float> v1, vector<float> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(std::abs(v1[i] - v2[i]) > 0.00001) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    vector<float> vec1 = {1, 2, 3};
    vector<float> vec2 = {1, 2, 4}; 
    if(issame(get_positive(vec1), get_positive(vec2))) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are different." << std::endl;
    }
    return 0;
}