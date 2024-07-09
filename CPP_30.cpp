#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<float> v1 = {1, -2, 3};
    std::vector<float> v2 = {-4, 5, -6};
    std::cout << "issame(" << get_positive(v1) << ", " << get_positive(v2) << ") = " << issame(get_positive(v1), get_positive(v2)) << std::endl;
    return 0;
}