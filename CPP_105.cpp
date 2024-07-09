#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {9, 4, 8};
    assert(equal(by_length(arr).begin(), by_length(arr).end(), {"Nine", "Eight", "Four"}));
    return 0;
}