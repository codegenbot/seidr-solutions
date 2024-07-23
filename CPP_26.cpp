vector<bool> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<bool> result(nums1.size(), false);
    
    for (int i : nums1) {
        for (int j : nums2) {
            if (i == j) {
                result[i] = true;
            }
        }
    }
    return result;
}

bool isSame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for(int i=0; i<v1.size();i++) {
        if(v1[i] != v2[i]) 
            return false;
    }
    return true;
}