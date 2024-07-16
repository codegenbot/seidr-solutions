#include <vector>
#include <iostream>

using namespace std;

vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    int rightMax = arr.back(); // Initialize with the rightmost element
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= rightMax){
            res.push_back(arr[i]);
            rightMax = arr[i];
        } else {
            rightMax = arr[i];
        }
    }
    
    res.push_back(arr[0]); // Add the leftmost element
    
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