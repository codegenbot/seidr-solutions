#include <vector>
#include <algorithm>

// Function to check if two vectors are same
bool issame(vector<int> a, vector<int> b) {
    // Check if sizes of both arrays are equal
    if (a.size() != b.size()) return false;
    
    // Compare elements of both arrays
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

// Function to pluck the first even node and its index from the given array
vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evenNodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }
    
    if (evenNodes.empty()) {
        return {};
    }
    
    sort(evenNodes.begin(), evenNodes.end());
    
    return {evenNodes[0].first, evenNodes[0].second};
}

int main() {
    // Call the pluck function and check the result
    assert(issame(pluck({7, 9, 7, 1}), {}));
    
    return 0;
}
