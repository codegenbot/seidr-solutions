```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        
        for (int i = n - 1; i >= 0; i--) {
            bool isLeader = true;
            
            for (int j = i + 1; j < n; j++) {
                if (arr[j] >= arr[i]) {
                    isLeader = false;
                    break;
                }
            }
            
            if (isLeader) {
                result.push_back(arr[i]);
            }
        }
        
        return result;
    }

    vector<int> arr;
    int n;
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
}