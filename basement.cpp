#include <vector>
using namespace std;

int findNegativeIndex(vector<int>& nums) {
    int index = 0;
    int sum = 0;
    
    for (const auto& num : nums) {
        sum += num;
        if (sum < 0) return index;
        index++;
    }
    
    return -1; // Return -1 if no such index is found
}