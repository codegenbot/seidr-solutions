```cpp
#include <bits/stdc++.h>
using namespace std;

bool issame(int a,int b){
    if(a==b) return true;
    else return false;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it,arr.end());
    }
    return 0;
}