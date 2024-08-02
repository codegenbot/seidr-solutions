#include <vector>
bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

int main() {
    vector<int> output = pluck({7, 9, 7, 1});
    assert(issame(output, {})); 
    return 0;
}