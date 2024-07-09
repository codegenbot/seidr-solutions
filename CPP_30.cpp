#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float i : l) {
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(get_positive({}) == {});
    return 0;
}