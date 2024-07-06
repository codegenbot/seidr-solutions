#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            auto it = min_element(l.begin(), l.end());
            result[i] = *it;
            l.erase(it);
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    // test case
    std::vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> output = sort_even(input);
    
    // print the output
    for (float num : output) {
        std::cout << num << " ";
    }
    return 0;
}