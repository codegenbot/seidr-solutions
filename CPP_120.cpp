#include <algorithm>
#include <iostream>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() == b.size())
        return true;
    else
        return false;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7) , {0,-23,-400,1,2,3,243}));
    return 0;
}