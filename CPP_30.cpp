#include <vector>
#include <iostream>

bool isSame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) 
        if (a[i] != b[i]) 
            return false;
    return true;
}

int main() {
    std::vector<float> v1 = get_positive({-1, -2, 3, 4});
    std::vector<float> v2 = get_positive({7, 8, -9, 10});
    if (isSame(v1, v2)) 
        std::cout << "vectors are the same" << std::endl;
    else 
        std::cout << "vectors are not the same" << std::endl;
    return 0;
}

vector<float> get_positive(vector<float> l) {
    vector<float> vec;
    for (float x : l) {
        if (x > 0) {
            vec.push_back(x);
        }
    }
    return vec;
}