#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0) {
        return leaders;
    }
    
    int lastLeader = arr[n-1];
    leaders.push_back(lastLeader);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= lastLeader) {
            lastLeader = arr[i];
            leaders.push_back(lastLeader);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> input = {17, 28, 4};
    vector<int> result = leaders(input);
    for (int i: result) cout << i << " ";
    return 0;
}