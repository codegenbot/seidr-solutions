```cpp
#include <vector>
#include <algorithm>

pair<int,int> compare(vector<int>a,vector<int>b){
    vector<int>vec1(a.begin(), a.end());
    vector<int>vec2(b.begin(), b.end());

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    if(vec1!=vec2) return make_pair(-1,-1);
    auto it = std::unique(vec1.begin(), vec1.end());
    vec1.erase(it, vec1.end());
    int cnt1=0,cnt2=0;
    
    for(int i=0;i<vec1.size();i++){
        if(vec1[i]==a[i])cnt1++;
        if(vec2[i]==b[i])cnt2++;
    }
    return make_pair(cnt1,cnt2);
}

int main() {
    assert(compare({1,2,3,5}, {-1,2,3,4}) == make_pair(0, 1)); 
    return 0;
}