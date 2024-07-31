#include <iostream>
#include <vector>
#include <utility>
#include <cassert>

using namespace std;

bool issame(pair<float, float> a, pair<float, float> b) {
    return a.first == b.first && a.second == b.second;
}

pair<float, float> find_closest_elements(vector<float> elements) {
    // Implementation to find closest elements in the vector
}

int main() {
    pair<float, float> expected_result = make_pair(3.1, 4.1);
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), expected_result);

    return 0;
}