#include <vector>
#include <cassert> // Include necessary header for assert()

bool issame(float a, float b) {
    return a == b;
}

vector<float> get_positive(vector<float> l);

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));
}