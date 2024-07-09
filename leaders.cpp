#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRightNow = arr[n - 1]; // Rightmost element is always a leader
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightNow) {
            result.push_back(arr[i]);
            maxRightNow = arr[i];
        }
    }
    reverse(result.begin(), result.end()); // Reverse the order of leaders
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