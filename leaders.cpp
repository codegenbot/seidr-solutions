#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;
    res.push_back(arr[n-1]);
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= arr[n-1]) res.push_back(arr[i]);
        else break;
    }
    return res;
}

int main() {
    vector<int> arr = {17, 28, 4};
    vector<int> result = leaders(arr);
    for(int i : result) cout << i << " ";
    return 0;
}