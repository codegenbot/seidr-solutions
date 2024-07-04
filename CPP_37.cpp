#include <vector>
#include <algorithm>
#include <iostream>
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
    uint32_t n;
    cin >> n; // Read number of elements
    vector<float> arr(n);
    for (uint32_t i = 0; i < n; ++i) {
        cin >> arr[i]; // Read each element
    }

    vector<float> result = sort_even(arr);

    for (float num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}