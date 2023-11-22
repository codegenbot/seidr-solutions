#include <vector>
using namespace std;

vector<int> findLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> leaders;
    int currentLeader = arr[n-1];
    leaders.push_back(currentLeader);
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= currentLeader){
            currentLeader = arr[i];
            leaders.push_back(currentLeader);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}