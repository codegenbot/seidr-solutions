#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int max_right = arr[n - 1];
    result.push_back(max_right);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            result.push_back(arr[i]);
            max_right = arr[i];
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