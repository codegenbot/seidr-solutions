#include <vector>
using namespace std;

vector<int> findPair(vector<int>& numbers, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;

    for (int num : numbers) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return {complement, num};
        }
        numMap[num] = 1;
    }

    return result;
}