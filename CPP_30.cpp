#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float>b){
    return a == b;
}

int main() {
    vector<float> result = get_positive({1, -2, 3});
    // assert (issame(get_positive({}), {}));
}