#include <vector>

std::vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(get_positive({1, 2, -3, 4}).begin(), get_positive({1, 2, -3, 4}).end(), get_positive({1, 2, 0, 4}).begin()));
    return 0;
}