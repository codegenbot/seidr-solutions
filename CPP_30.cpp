#include <vector>

bool issame(vector<float> a, vector<vector<float>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(std::abs(a[i]) < std::numeric_limits<double>::epsilon())) {
            if (!std::is_same<decltype(a[i]), decltype(b[i])>::value) {
                if (!std::equal(a.begin(), a.end(), b.begin(), [](float x, float y) { return (std::abs(x - y) < std::numeric_limits<double>::epsilon()); })) {
                    return false;
                }
            } else {
                if (a[i] != b[i]) {
                    return false;
                }
            }
        }
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {})); // test the functions
}