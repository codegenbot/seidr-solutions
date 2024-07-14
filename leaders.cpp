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
    
    int leader = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= leader) {
            leader = arr[i];
        }
    }
    leaders.push_back(leader);
    
    return leaders;
}