#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert> 

using namespace std;

void sort_even(const vector<float>& l) {
    vector<float> even_values;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            const_cast<vector<float>&>(l)[i] = even_values[even_index];
            even_index++;
        }
    }
}

vector<float> sort_even_elements(vector<float> l) {
    sort_even(l);
    return l;
}

int main() {
    vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> result = sort_even_elements(input);
    vector<float> expected_result = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    assert(result == expected_result);
    
    return 0;
}