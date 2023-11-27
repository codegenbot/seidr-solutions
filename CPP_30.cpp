#include <vector>

bool issame(vector<float> a, vector<float> b) {
    // implementation of the issame function
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(int i = 0; i < l.size(); i++) {
        if(l[i] > 0) {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}