#include <vector>
#include <unordered_map>

int search(const vector<int>& lst) {
    int result = -1;
    unordered_map<int, int> freq;
    
    for (int num : lst) {
        freq[num]++;
    }
    
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->first > result) {
            result = it->first;
        }
    }
    
    return result;
}

int main() {
    // Test the search function
    vector<int> nums = {2, 3, 3, 4, 4, 4};
    int res = search(nums);
    
    return 0;
}