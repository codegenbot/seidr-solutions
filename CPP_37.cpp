```cpp
#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(l[j]);
                }
            }
            std::sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    std::vector<float> input;
    std::cout << "Enter the size of the array: ";
    int n; std::cin >> n;

    for (int i=0; i<n; i++) {
        float x; std::cin >> x;
        input.push_back(x);
    }

    std::vector<float> output = sort_even(input);

    if (issame(output, {1.7f, -2.9f, 3.14f, 4.8f})) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed!" << std::endl;
    }

    std::vector<float> test_input({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    std::vector<float> test_output = sort_even(test_input);

    assert(issame(test_output, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}