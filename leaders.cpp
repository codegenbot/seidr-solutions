#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    if (n == 0) {
        return leaders;
    }
    int rightmost_leader = arr[n - 1];
    leaders.push_back(rightmost_leader);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmost_leader) {
            rightmost_leader = arr[i];
            leaders.push_back(rightmost_leader);
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}