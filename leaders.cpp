#include <vector>
#include <iostream>
using namespace std;

vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0)
        return leaders;
    
    int maxR = arr[n-1];
    leaders.push_back(maxR);
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= maxR){
            leaders.push_back(arr[i]);
            maxR = arr[i];
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {15, 368, 286, 293, 350, 228, 403, 363, 199, 827, 153, 52, 293, 286, 18, 538};
    vector<int> leadersVec = calculateLeaders(arr);
    for(int i:leadersVec){
        cout << i << " ";
    }
    return 0;
}