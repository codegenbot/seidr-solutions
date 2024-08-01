#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersVector = leaders(arr);
    for (int i: leadersVector) {
        cout << i << endl;
    }
    return 0;
}

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