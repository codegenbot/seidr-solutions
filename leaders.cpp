#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxLeftSoFar = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= maxLeftSoFar) {
            result.push_back(arr[i]);
            maxLeftSoFar = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {17, 201, 505, 93, 333, 757, 604, 80, 988, 681, 249, 569, 635, 659, 692, 183, 780, 465};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << endl;
    }
    return 0;
}