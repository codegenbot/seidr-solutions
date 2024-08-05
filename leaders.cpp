#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int maxRight = arr[n-1];
    for(int i=n-1; i>=0; i--){
        if(arr[i] >= maxRight){
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersRes = leaders(arr);
    for(int i=0; i<leadersRes.size(); i++) {
        cout << leadersRes[i] << " ";
    }
    return 0;
}