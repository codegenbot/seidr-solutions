#include <unordered_map>
#include <algorithm>

int search(vector<int> lst){
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    
    int result = -1;
    for (auto& pair : freq) {
        if (pair.second >= pair.first && pair.second > result) {
            result = pair.second;
        }
    }
    
    return result;
}