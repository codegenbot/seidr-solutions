#include <vector>
#include <numeric>

std::vector<float> std::get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool is_same(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(is_same(get_positive({}), {}));
    return 0;
}