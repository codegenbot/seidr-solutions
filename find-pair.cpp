#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < numbers.size(); ++i) {
        int diff = target - numbers[i];
        if (numMap.find(diff) != numMap.end()) {
            return {numbers[i], diff};
        }
        numMap[numbers[i]] = i;
    }
    return {-1, -1};  // or throw an exception
}