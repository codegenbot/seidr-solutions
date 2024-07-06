#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float i : l) {
        if(i > 0)
            result.push_back(i);
    }
    return result;
}

bool std::issame(std::vector<float> a, std::vector<float>b) {
    // implement issame function here
}

int main() {
    assert(std::issame(get_positive({}), {}) );
    return 0;
}