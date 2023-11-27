#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float>b);

vector<float> derivative(vector<float> xs);

int main() {
    // Test cases
    vector<float> test1 = {1, 2, 3, 4, 5};
    vector<float> result1 = derivative(test1);
    assert(issame(result1, {2, 6, 12, 20}));

    vector<float> test2 = {2, 4, 6, 8, 10};
    vector<float> result2 = derivative(test2);
    assert(issame(result2, {4, 12, 24, 40}));

    vector<float> test3 = {0, 1, 2, 3, 4, 5};
    vector<float> result3 = derivative(test3);
    assert(issame(result3, {1, 4, 9, 16, 25}));

    return 0;
}

bool issame(vector<float> a, vector<float>b) {
    if(a.size() != b.size()) {
        return false;
    }

    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for(int i=1; i<xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}