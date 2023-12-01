#include <vector>
#include <climits>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    // check if two vectors are empty
    if (a.empty() && b.empty()) {
        return true;
    }
    // check if lengths are equal
    if (a.size() != b.size()) {
        return false;
    }
    // check if corresponding elements are equal
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    // vectors are equal
    return true;
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_even = INT_MAX;
    int smallest_index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if (smallest_index != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}

int main() {
    // assert test cases
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({1, 3, 5, 7}), {}));
    assert(issame(pluck({-4, 2, -1, 0}), {-4, 0}));
    
    return 0;
}