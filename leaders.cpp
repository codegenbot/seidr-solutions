#include <vector>
#include <iostream>
using namespace std;

vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0)
        return leaders;
    
    leaders.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--){
        while(i > 0 && arr[i] <= leaders.back()){
            leaders.pop_back();
        }
        leaders.push_back(arr[i]);
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersVec = calculateLeaders(arr);
    for(int i:leadersVec){
        cout << i << " ";
    }
    return 0;
}