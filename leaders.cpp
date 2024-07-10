#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersResult = leaders(arr);
    for(int i: leadersResult) cout << i << " ";
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxRightSoFar = arr[n-1];
    res.push_back(maxRightSoFar);
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= maxRightSoFar){
            res.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    
    return res;
}