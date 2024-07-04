#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> even_indices;
    for (int i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());
    for (int i = 0, j = 0; i < l.size(); i += 2, ++j) {
        l[i] = even_indices[j];
    }
    return l;
}

int main() {
    vector<float> result = sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    for (float n : result) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}