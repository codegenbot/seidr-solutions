#include<bits/stdc++.h>
using namespace std;

bool isSame(vector<int> &v1,vector<int>& v2){
    if(v1.size()!=v2.size())return false;
    for(int i=0;i<v1.size();i++){
        if(find(v2.begin(),v2.end(),v1[i]) == v2.end()) return false;
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> seen;
    vector<int> result;

    for (int num : numbers) {
        if (!seen.count(num) || !seen[num]) {
            seen[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    vector<int> nums1={1,2,3};
    vector<int> nums2={2,2,3};
    cout << (isSame(remove_duplicates(nums1),remove_duplicates(nums2)) ? "Yes" : "No")<<endl;
    return 0;
}