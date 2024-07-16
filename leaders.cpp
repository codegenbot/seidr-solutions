#include <vector>
#include <iostream>

using namespace std;

vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    int rightMax = arr.back(); // Initialize with the last element
    
    for(int i=n-1; i>=0; i--){
        if(arr[i] >= rightMax){
            res.push_back(arr[i]);
            rightMax = arr[i];
        } else {
            rightMax = arr[i];
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {15, 368, 286, 293, 350, 228, 403, 363, 199, 827, 153, 52, 293, 286, 18, 538};
    vector<int> leadersVec = calculateLeaders(arr);
    for(int i:leadersVec){
        cout << i << " ";
    }
    return 0;
}