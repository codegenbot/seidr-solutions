#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

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
    vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(input);

    assert(input == vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});

    return 0;
}