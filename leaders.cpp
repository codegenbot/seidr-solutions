```cpp
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
    
    int leader = arr.back();
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= leader) leader = arr[i];
    }
    
    for(int i=0; i<n; i++) {
        if(arr[i] >= leader) leaders.push_back(leader);
        else leaders.push_back(arr[i]);
    }
    
    return leaders;
}