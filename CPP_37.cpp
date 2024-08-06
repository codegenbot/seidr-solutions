#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& l) {
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
            l[i] = even_values[even_index];
            even_index++;
        }
    }
}

int main() {
    vector<float> input = {9.1, 2.1, 5.6, 3.4, 8.7, 4.2};
    vector<float> original = input;

    sort_even(input);

    if (issame(input, original)) {
        std::cout << "Sorted even-indexed elements match original vector." << std::endl;
    } else {
        std::cout << "Sorted even-indexed elements do not match original vector." << std::endl;
    }

    return 0;
}