#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
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
    std::vector<float> a = {1, -2, 3};
    std::vector<float> b = {-4, 5, -6};
    
    if(issame(get_positive(a), get_positive(b))) {
        std::cout << "The vectors are the same.\n";
    } else {
        std::cout << "The vectors are not the same.\n";
    }
    return 0;
}