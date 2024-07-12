```
#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    if(n == 1)
        return arr;
        
    for(int i=n-2; i>=0; i--){
        while(i<n-1 && arr[i] <= arr[n-1])
            n--;
    }
    
    res.push_back(arr[n-1]);
    
    for(int i=0; i<n-1; i++){
        if(arr[i] >= arr[n-1])
            res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    vector<int> test = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(test);
    for(int i: result) {
        cout << i << " ";
    }
    return 0;
}