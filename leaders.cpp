#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    int max_right = arr[n-1];
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= max_right){
            max_right = arr[i];
            res.push_back(max_right);
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersVec = leaders(arr);
    for(int i:leadersVec){
        cout << i << " ";
    }
    return 0;
}