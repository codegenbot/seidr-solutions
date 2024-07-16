#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = generate_integers(1, 10);
    vector<int> nums2 = generate_integers(1, 10);
    
    bool same = issame(nums1, nums2);
    
    return 0;
}