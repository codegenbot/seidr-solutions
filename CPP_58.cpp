#include <vector>
#include <set>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<int> l1 = {1,2,3};
    vector<int> l2 = {2,3,4};
    cout << issame(l1,l2);
}