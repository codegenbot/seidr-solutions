#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b);
vector<float> sort_even(vector<float> l);

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

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

int main() {
    vector<float> original_values = {7.2, 2.5, 4.0, 9.1, 6.7, 3.3};
    vector<float> sorted_values = sort_even(original_values);

    for (int i = 0; i < sorted_values.size(); i++) {
        std::cout << sorted_values[i] << " ";
    }

    return 0;
}