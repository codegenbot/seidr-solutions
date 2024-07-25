#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

vector<int> getTopKFrequent(vector<vector<int>> nums, int k) {
    map<int,int> freqMap;
    for(int i=0; i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            freqMap[nums[i][j]]++;
        }
    }
    vector<pair<int,int>> freqVec(freqMap.begin(),freqMap.end());
    sort(freqVec.rbegin(),freqVec.rend());
    vector<int> res;
    for(int i=0;i<k;i++){
        res.push_back(freqVec[i].first);
    }
    return res;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 5) , {3,243,0,-23,-400});
    vector<vector<int>> nums = {{1,1},{4,2,2,3},{3,4,3,1,2,2}};
    vector<int> result = getTopKFrequent(nums, 2);
    for(int i=0; i<result.size();i++){
        cout<<result[i]<<endl;
    }
}