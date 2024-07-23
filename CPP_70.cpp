#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main() {
    assert(issame({1,2,3}, {1,2,3})); 
    return 0;
}