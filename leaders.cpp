```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> leaders_result = leaders(arr);
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    for(int i = n - 1; i >= 0; i--) {
        bool leader = true;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(arr[i]);
    }
    return res;
}