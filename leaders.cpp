#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int rightmostLeaderIndex = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (i == rightmostLeaderIndex || arr[i] >= arr[rightmostLeaderIndex]) {
            result.push_back(arr[i]);
            rightmostLeaderIndex = i;
        }
    }
    return result;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
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
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << std::endl;
    }
}