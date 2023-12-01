#include <vector>

vector<float> get_positive(vector<float> l);

bool issame(vector<float> a, vector<float> b) {
    // function implementation
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
    // test the functions
    assert(issame(get_positive({}), {}));
    // other test cases
}