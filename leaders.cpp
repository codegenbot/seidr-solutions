#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n==0)
        return leaders;
    
    int rightmostLeader = arr[n-1];
    leaders.push_back(rightmostLeader);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= rightmostLeader) {
            rightmostLeader = arr[i];
            leaders.push_back(rightmostLeader);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {17, 28, 4};
    vector<int> result = leaders(arr);
    for(int i : result)
        cout << i << " ";
    return 0;
}