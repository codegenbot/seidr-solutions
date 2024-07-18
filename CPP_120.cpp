#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size() && equal(a.begin(), a.end(), b.begin()));
}

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    vector<int> arr;
    for (auto it : freq) {
        arr.push_back(it.first);
    }

    sort(arr.begin(), arr.end(), [&freq](int a, int b) {
        return freq[a] > freq[b] || (freq[a] == freq[b] && a < b);
    });

    arr.resize(k);
    return arr;
}