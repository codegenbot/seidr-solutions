#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int leader = -1; // Initialize the leader
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= leader) {
            leader = arr[i];
            result.push_back(leader);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << endl;
    }
    return 0;
}