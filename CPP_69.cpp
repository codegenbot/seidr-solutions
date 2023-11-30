#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    std::unordered_map<int, int> frequencyMap;
    
    // Count the frequency of each integer in the vector
    for (int num : lst) {
        frequencyMap[num]++;
    }
    
    int result = -1;
    
    // Find the greatest integer that has a frequency greater than or equal to the value of the integer itself
    for (const auto& pair : frequencyMap) {
        int num = pair.first;
        int frequency = pair.second;
        
        if (num > 0 && frequency >= num && num > result) {
            result = num;
        }
    }
    
    return result;
}