#include <vector>
using namespace std;

vector<int> findPair(vector<int>& numbers, int target) {
    vector<int> pair;
    map<int, int> numMap;
    
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        
        if (numMap.find(complement) != numMap.end()) {
            pair.push_back(numbers[i]);
            pair.push_back(complement);
            break;
        }
        
        numMap[numbers[i]] = i;
    }
    
    return pair;
}