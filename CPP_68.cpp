#include <vector>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallest_even_value = -1;
    int smallest_even_index = -1;
    
    // Iterate through all elements in the array
    for (int i = 0; i < arr.size(); i++) {
        // Check if the current element is even and smaller than the current smallest even value
        if (arr[i] % 2 == 0 && (smallest_even_value == -1 || arr[i] < smallest_even_value)) {
            smallest_even_value = arr[i];
            smallest_even_index = i;
        }
    }
    
    // If a smallest even value is found, add it to the result vector
    if (smallest_even_value != -1) {
        result.push_back(smallest_even_value);
        result.push_back(smallest_even_index);
    }
    
    return result;
}