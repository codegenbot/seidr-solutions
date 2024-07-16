#include <vector>
#include <algorithm>

bool issame(const vector<int>& nums1, const vector<int>& nums2) {
    if(nums1.size() != nums2.size())
        return false;
    for(int i = 0; i < nums1.size(); ++i) {
        if(nums1[i] != nums2[i])
            return false;
    }
    return true;
}

vector<int> solve(int n) {
    vector<int> result;
    while(n != 1){
        if(n % 2 == 1)
            result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}