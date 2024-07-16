#include <iostream>
#include <vector>
#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> even_values;
    vector<float> result;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    
    sort(even_values.begin(), even_values.end());
    
    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_values[j]);
            j++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}

int main() {
    assert(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) == vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});

    return 0;
}