#include <vector>
using namespace std;

int main() {
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        
        for (int i = n - 1; i >= 0; i--) {
            bool leader = true;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] >= arr[i]) {
                    leader = false;
                    break;
                }
            }
            if (leader) {
                result.push_back(arr[i]);
            }
        }
        
        return result;
    }

    int main() {
        vector<int> arr = {1, 3, 4, 1, 5};
        vector<int> leadersVector = leaders(arr);
        for (int i : leadersVector) {
            cout << i << " ";
        }
        return 0;
    }