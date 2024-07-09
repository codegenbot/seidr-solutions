#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(get_positive({}) == {});
    std::vector<float> a = {1.0, -2.0, 3.0};
    std::vector<float> b = {-4.0, 5.0, -6.0};
    if (!issame(get_positive(a), get_positive(b))) {
        for (float num : a) {
            if (num > 0 && !std::find(std::begin(b), std::end(b), num) == std::end(b)) {
                printf("Expected %f in vector b\n", num);
                return 1;
            }
        }
        for (float num : b) {
            if (num > 0 && !std::find(std::begin(a), std::end(a), num) == std::end(a)) {
                printf("Expected %f in vector a\n", num);
                return 1;
            }
        }
    }
    return 0;
}