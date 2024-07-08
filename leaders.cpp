#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = n-1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i - 1; j >= 0; j--) {
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
    vector<int> arr = {12, 10, 8, 6};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}