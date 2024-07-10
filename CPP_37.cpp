#include <iostream>
#include <vector>
#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> even_values;
    vector<float> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }
    sort(sorted_even_values.begin(), sorted_even_values.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_even_index];
            sorted_even_index++;
        }
    }
    return l;
}

int main() {
    vector<float> input = {3.5, 2.1, 4.8, 1.2, 5.7, 6.3};
    vector<float> result = sort_even(input);
    for (float val : result) {
        cout << val << " ";
    }
    return 0;
}