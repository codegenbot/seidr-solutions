#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);
std::vector<int> largest_smallest_integers(std::vector<int> lst);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    std::vector<int> result = {0, 0};
    int largest_negative = INT_MIN;
    int smallest_positive = 0;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    
    result[0] = largest_negative == INT_MIN ? 0 : largest_negative;
    result[1] = smallest_positive;
    
    return result;
}

int main() {
    std::vector<int> test_lst = {5, -3, 2, -8, 9};
    std::vector<int> expected_result = {-3, 2};
    
    std::vector<int> result = largest_smallest_integers(test_lst);
    
    assert(issame(result, expected_result));
    
    return 0;
}