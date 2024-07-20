#include <set>
#include <algorithm>
#include <vector>
#include <assert.h>

bool issame(vector<int> a,vector<int>b){
    return a.size() == b.size();
}

int main(){
    assert (issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}