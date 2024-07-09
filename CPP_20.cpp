#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size();
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    vector<pair<float, float>> result = find_closest_elements(numbers);
    // code to use the result
}