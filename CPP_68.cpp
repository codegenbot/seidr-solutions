#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if(arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index_smallest_even = -1;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_smallest_even = i;
        }
    }

    result.push_back(smallest_even);
    result.push_back(index_smallest_even);

    return result;
}

int main() {
    std::vector<int> input;
    // Read input from the user
    // Add your code here

    std::vector<int> output = pluck(input);
    
    for(int i=0; i<output.size(); i++) {
        std::cout << output[i] << " ";
    }
    return 0;
}