Here is the solution:

int findPair(vector<int>& vec, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (mp.find(complement) != mp.end()) {
            return min(vec[i], complement);
        }
        mp[vec[i]] = i;
    }
    return -1;
}