```cpp
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if (n == 0) return result; 
    int lastLeader = arr[n-1];
    result.push_back(lastLeader);
    
    for(int i = n-2; i >= 0; --i) {
        if(arr[i] >= lastLeader) {
            lastLeader = arr[i];
            result.push_back(lastLeader);
        }
    }
    
    return vector<int>(result.rbegin(), result.rend());
}

int main() {
    vector<int> vec = {1, 3, 4, 1, 5};
    vector<int> leadersVector = leaders(vec);
    for(int i: leadersVector) cout << i << " ";
    return 0;
}