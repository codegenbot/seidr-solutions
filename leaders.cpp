#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;
    
    int right = n - 1;
    for(int i=n-2; i>=0; --i){
        while(right > i && arr[right] >= arr[i]){
            --right;
        }
        if(i == right) res.push_back(arr[i]);
        else right = i;
    }
    return res;
}

int main() {
    vector<int> arr = {18, 591, 547, 54, 773, 507, 959, 32, 183, 899, 283, 477, 864, 28, 681, 572, 910, 983, 777};
    vector<int> result = leaders(arr);
    for(int i : result) cout << i << " ";
    return 0;
}