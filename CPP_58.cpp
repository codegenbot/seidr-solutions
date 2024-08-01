#include <set>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> result = common({4, 3, 2, 8}, {});
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}