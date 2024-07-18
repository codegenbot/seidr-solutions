#include <vector>
#include <climits>

std::vector<int> largest_smallest_integers(std::vector<int> lst);

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1[0] == v2[0] && v1[1] == v2[1];
}

int main() {
    std::vector<int> input = {3, -1, -5, 7, 10, -2};
    std::vector<int> expected_output = {-1, 3};

    std::vector<int> result = largest_smallest_integers(input);

    if (issame(result, expected_output)) {
        // Output is correct
    } else {
        // Output is incorrect
    }

    return 0;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    std::vector<int> result(2, 0);
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    
    result[0] = (largest_negative == INT_MIN) ? 0 : largest_negative;
    result[1] = (smallest_positive == INT_MAX) ? 0 : smallest_positive;
    
    return result;
}