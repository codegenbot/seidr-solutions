#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

vector<float> sort_even(const vector<float>& l);
bool issame(const vector<float>& a, const vector<float>& b);

vector<float> sort_even(const vector<float>& l) {
    vector<float> even_values;
    vector<float> result;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    
    sort(even_values.begin(), even_values.end());
    
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_values[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    vector<float> a_copy = a;
    vector<float> b_copy = b;
    
    sort(a_copy.begin(), a_copy.end());
    sort(b_copy.begin(), b_copy.end());
    
    return a_copy == b_copy;
}

int main() {
    vector<float> input = {3.5, 2.0, 1.2, 4.8, 5.3};
    vector<float> sorted_even = sort_even(input);
    
    assert(issame(sorted_even, {1.2, 2.0, 3.5, 4.8, 5.3}));
    
    return 0;
}