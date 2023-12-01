#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    
    // Count the frequency of each integer
    for (int num : lst) {
        freq[num]++;
    }
    
    int result = -1;
    
    // Find the greatest integer that satisfies the condition
    for (auto it : freq) {
        int num = it.first;
        int frequency = it.second;
        
        if (num > 0 && frequency >= num && num > result) {
            result = num;
        }
    }
    
    return result;
}