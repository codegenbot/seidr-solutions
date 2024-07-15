#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                leader = false;
                break;
            }
        }
        
        if(leader) {
            leaders.push_back(arr[i]);
        }
    }
    
    return leaders;
}

vector<int> result = leaders({16, 17, 4, 3, 5, 2});
for(int num : result){
    cout << num << " ";
}