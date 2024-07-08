#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> solve(std::vector<int>& l) {
    std::vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }
    std::vector<int> sorted_values;
    for (int idx : indices) {
        sorted_values.push_back(l[idx]);
    }
    std::sort(sorted_values.begin(), sorted_values.end());
    for (int i = 0; i < indices.size(); ++i) {
        l[indices[i]] = sorted_values[i];
    }
    return l;
}

int main() {
    std::vector<int> input = {7, 3, 9, 1, 5, 4, 2, 8, 6};
    std::vector<int> expected = {2, 3, 6, 1, 5, 4, 7, 8, 9};
    
    std::vector<int> result = solve(input);
    
    assert(issame(result, expected));
    
    std::cout << "Test passed successfully!" << std::endl;
    
    return 0;
}