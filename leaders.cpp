#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int lastLeaderIndex = -1;
    
    for(int i=n-1; i>=0; i--){
        if(i < lastLeaderIndex){
            leaders.clear();
            break;
        }
        
        if(lastLeaderIndex == -1 || arr[i] >= arr[lastLeaderIndex]){
            lastLeaderIndex = i;
            leaders.push_back(arr[i]);
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