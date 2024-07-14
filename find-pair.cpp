#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& vec, int target) {
    map<int, int> numMap;
    for (int num : vec) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return {complement, num};
        }
        numMap[num] = 1;
    }
    return {{}, {}}; // or throw an exception
}