#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({-1, 1, 2, -2}), {1, 2}));
    assert(issame(get_positive({}), {}));
    cout << "All tests passed!" << endl;
    return 0;
}