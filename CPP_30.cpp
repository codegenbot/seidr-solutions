#include <vector>
#include <assert.h>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(std::equal(get_positive({}).begin(), get_positive({}).end(), {}));
    return 0;
}