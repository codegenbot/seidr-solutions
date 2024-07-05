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
    for (size_t i = 0, j = 0; i < l.size(); i += 2, ++j) {
        l[i] = even_indices[j];
    }
    return l;
}

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    vector<float> elems(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> elems[i];
    }

    vector<float> sorted_elems = sort_even(elems);
    cout << "Sorted even indices: ";
    for (const auto& elem : sorted_elems) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}