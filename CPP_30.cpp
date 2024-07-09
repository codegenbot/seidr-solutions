```cpp
#include <vector>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool equals(std::vector<float> vector1, std::vector<float> vector2) {
    if (vector1.size() != vector2.size()) {
        return false;
    }
    for (int i = 0; i < vector1.size(); i++) {
        if (vector1[i] != vector2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> v1 = {1.0, -2.0, 3.0};
    std::vector<float> v2 = {-4.0, 5.0, 6.0};
    std::vector<float> v3 = {7.0, 8.0, 9.0};

    std::vector<float> result1 = get_positive(v1);
    std::vector<float> result2 = get_positive(v2);
    std::vector<float> result3 = get_positive(v3);

    assert(equals(result1, {})); 
    assert(equals(result2, {})); 
    assert(!equals(result1, result2));
    
    return 0;
}