#include <iostream>
#include <vector>

bool checkVectorsEqual(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(const std::vector<int>& l) {
    std::vector<float> result;
    for (int num : l) {
        if (num > 0) {
            result.push_back((float)num); 
        }
    }
    return result;
}

int main() {
    assert(checkVectorsEqual(get_positive({}), std::vector<float>{}));
    return 0;
}