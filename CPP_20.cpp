#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<float>& a, const vector<float>& b) {
    return (a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()));
}

void find_closest_elements(const vector<float>& elements, vector<float>& closest_elements) {
    vector<float> sorted_elements = elements;
    std::sort(sorted_elements.begin(), sorted_elements.end());
    closest_elements.push_back(sorted_elements[0]);
    closest_elements.push_back(sorted_elements[1]);
}

int main() {
    vector<float> closest;
    vector<float> input = {1.1, 2.2, 3.1, 4.1, 5.1};
    find_closest_elements(input, closest);

    assert(issame(closest, {1.1, 2.2}));

    return 0;
}