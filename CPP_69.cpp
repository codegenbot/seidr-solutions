#include <unordered_map>

int search(vector<int> lst){
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    
    int result = -1;
    for (auto &entry : freq) {
        if (entry.first <= entry.second) {
            result = max(result, entry.first);
        }
    }
    
    return result;
}