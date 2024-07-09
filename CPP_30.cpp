#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(get_positive({}) == {});
    vector<float> l = {1, -2, 3, -4};
    vector<float> result = get_positive(l);
    for (float num : result) {
        cout << num << " ";
    }
    return 0;
}