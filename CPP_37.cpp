#include <iostream>
#include <vector>
#include <algorithm>

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
    int n;
    cin >> n;
    vector<float> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    vector<float> sorted_list = sort_even(l);

    for (float num : sorted_list) {
        cout << num << " ";
    }

    return 0;
}