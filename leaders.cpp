```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for(int i=n-1; i>=0; i--) {
        bool is_leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] <= arr[j]) {
                is_leader = false;
                break;
            }
        }
        if(is_leader) result.push_back(arr[i]);
    }
    return result;
}

int main() {
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> result = leaders(arr);
    for(int i: result) {
        cout << i << " ";
    }
    return 0;
}