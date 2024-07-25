#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (mp.find(complement) != mp.end()) {
            return make_pair(vec[i], complement);
        }
        mp[vec[i]] = i;
    }
    return make_pair(-1, -1); // Return default pair if no pair found
}