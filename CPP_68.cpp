#include <vector>
#include <cassert> // Include for assert
#include <climits> // Include for INT_MAX

using namespace std; // Add this line

vector<int> pluck(vector<int> arr); // Declare pluck function before issame

bool issame(vector<int> a, vector<int> b) { // Correct signature of function
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

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_even = INT_MAX;
    int smallest_index = INT_MAX;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if (smallest_even != INT_MAX) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}

int main() { // Added main function as per error message
    assert(issame(pluck({7, 9, 7, 1}), {})); // Correct function call syntax
    return 0;
}