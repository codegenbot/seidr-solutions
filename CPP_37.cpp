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
    vector<float> v;
    float input;
    
    cout << "Enter numbers (type 'end' to finish): ";
    while(cin >> input) {
        v.push_back(input);
    }

    vector<float> sorted_v = sort_even(v);
    for (float num : sorted_v) {
        cout << num << " ";
    }
    return 0;
}