#include <vector>
#include <iostream>

using namespace std;

vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    int rightMax = arr.back(); // Initialize with the rightmost element
    
    for(int i=0; i<n; i++){
        if(arr[i] >= rightMax){
            res.push_back(arr[i]);
            rightMax = arr[i];
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersVec = calculateLeaders(arr);
    for(int i:leadersVec){
        cout << i << " ";
    }
    return 0;
}