#include <vector>
#include <initializer_list>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    for(int i=n-1;i>=0;i--){
        bool is_leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                is_leader=false;
                break;
            }
        }
        if(is_leader){
            leaders.push_back(arr[i]);
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}