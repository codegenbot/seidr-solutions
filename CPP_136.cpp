#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}

int main() {
    std::vector<int> input = {3, -4, 5, -1, 6, -10};
    std::vector<int> output = largest_smallest_integers(input);
    std::vector<int> expected_output = {-1, 3};
    
    if (issame(output, expected_output)) {
        std::cout << "Test passed. Output matches expected." << std::endl;
    } else {
        std::cout << "Test failed. Output does not match expected." << std::endl;
    }
    
    return 0;
}