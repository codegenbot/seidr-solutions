#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;

}

int main() {
    std::vector<float> v = get_positive({-1.0f, 2.0f, -3.0f, 4.0f});
    assert(issame(v, std::vector<float>{2.0f, 4.0f}));
    return 0;
}