#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>
 
using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> even_indices;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());
    for (size_t i = 0, j = 0; i < l.size(); i += 2, ++j) {
        l[i] = even_indices[j];
    }
    return l;
}

int main() {
    vector<float> result = sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    vector<float> expected = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    assert(result == expected);
    cout << "Test passed!" << endl;
    return 0;
}