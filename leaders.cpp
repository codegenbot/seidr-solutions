#include <vector>
using namespace std;

int main() {
    vector<int> leaders(vector<int>& arr) {
        vector<int> result;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            bool isLeader = true;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] >= arr[i]) {
                    isLeader = false;
                    break;
                }
            }
            if (isLeader) result.push_back(arr[i]);
        }
        return result;
    }

    vector<int> arr = {16, 17, 4, 3, 5, 2};
    cout << "Leaders: ";
    for(int x : leaders(arr)) {
        cout << x << " ";
    }
}