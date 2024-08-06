#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

void sort_even(std::vector<float>& l) {
    std::vector<float> even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    std::sort(even_values.begin(), even_values.end());
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_values[even_index];
            even_index++;
        }
    }
}

int main() {
    std::vector<float> input = {4.1, 2.3, 5.4, 1.2, 3.7};
    std::vector<float> expected = {1.2, 2.3, 3.7, 4.1, 5.4};
    
    sort_even(input);

    if (issame(input, expected)) {
        std::cout << "Sorting successful!" << std::endl;
    } else {
        std::cout << "Sorting failed." << std::endl;
    }

    return 0;
}