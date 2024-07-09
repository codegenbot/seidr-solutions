```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 3, 2, 3, 1};
    vector<int> leaders = leaders(arr);
    for (int i : leaders) {
        cout << i << " ";
    }
    return 0;
}