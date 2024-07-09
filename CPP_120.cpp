#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // Check if all elements in 'a' are equal to those in 'b'
    return std::all_of(a.begin(), a.end(), [&b](int x) { return std::count(b.begin(), b.end(), x) == 1; });
}

vector<int> maximum(vector<int> arr, int k) {
    if(k > arr.size()) {
        return {};
    }
    
    vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}