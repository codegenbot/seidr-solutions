#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b) {
    // Implementation of the issame function
}

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
    // Code to test the functions
    assert(issame(get_positive({}), {}));
}