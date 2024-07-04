#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> even_indices;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());
    size_t even_index = 0;
    for (size_t i = 0; i < l.size(); i += 2) {
        l[i] = even_indices[even_index++];
    }
    return l;
}

int main() {
    int n;
    cin >> n;
    vector<float> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    l = sort_even(l);
    for (float num : l) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}