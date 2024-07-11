#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int rightmostLeader = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= rightmostLeader) {
            result.push_back(arr[i]);
            rightmostLeader = arr[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 7};
    vector<int> leadersResult = leaders(arr);
    for (int i : leadersResult) {
        cout << i << " ";
    }
    return 0;
}