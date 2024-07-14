#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> leaders = leaders(arr);
    for(int i: leaders) cout << i << " ";
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int leaderIndex = -1;
    for(int i=n-1; i>=0; i--) {
        if(i < leaderIndex) leaders.push_back(arr[i]);
        else leaderIndex = i;
    }
    
    return leaders;
}