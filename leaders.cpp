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
    
    int maxRightSoFar = arr[n-1];
    leaders.push_back(maxRightSoFar);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) {
            leaders.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    
    return leaders;
}