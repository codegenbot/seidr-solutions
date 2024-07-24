#include <vector>
#include <cassert>

vector<float> sort_even(vector<float> l) {
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

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> input = {3.5, 2.0, 1.2, 4.8, 5.3};
    vector<float> sorted_even = sort_even(input);
    
    assert(issame(sorted_even, {1.2, 2.0, 3.5, 4.8, 5.3}));
    
    return 0;
}