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
    
    int main() {
        vector<int> arr = {16, 17, 4, 3, 5, 2};
        vector<int> result = leaders(arr);
        for(int i: result) {
            cout << i << " ";
        }
        return 0;
    }