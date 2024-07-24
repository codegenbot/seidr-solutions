#include <vector> // Include necessary headers

bool issame(const std::vector<int>& a, const std::vector<int>& b){ // Update function signature to include const and std::
    return a == b; // Return comparison result directly
}

std::vector<int> pluck(const std::vector<int>& arr){
    std::vector<int> result;
    int smallest_even = -1;
    int smallest_index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if (smallest_even != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}