#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) { 
    if(a.size() != b.size()) return false; 
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    } 
    return true; 
} 

std::vector<int> maximum(std::vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    return vector<int>(arr.begin(), arr.begin() + k);
}