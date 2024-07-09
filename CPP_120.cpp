```
#include <algorithm>
#include <iostream>
#include <cassert>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() == b.size())
        return true;
    else
        return false;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.end());
    sort(result.rbegin(), result.rend());
    return vector<int>(result.begin(), result.begin()+k);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7) , {0,-23,-400,1,2,3,243}));
    return 0;
}