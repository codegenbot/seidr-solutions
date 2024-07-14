#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < numbers.size(); i++) {
        int n = numbers[i];
        int complement = target - n;
        if (numMap.find(complement) != numMap.end()) {
            return make_pair(complement, n);
        }
        numMap[n] = i;
    }
    return make_pair(0, 0); // or throw an exception, depending on your requirements
}