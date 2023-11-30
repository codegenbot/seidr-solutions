#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    std::unordered_map<int, int> frequency;
    
    // Count the frequency of each integer in the vector
    for (int num : lst) {
        frequency[num]++;
    }
    
    // Find the greatest integer that meets the condition
    int result = -1;
    for (const auto& pair : frequency) {
        if (pair.second >= pair.first && pair.first > result) {
            result = pair.first;
        }
    }
    
    return result;
}