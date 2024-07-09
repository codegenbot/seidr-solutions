#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRightSoFar = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    return result;
}

vector<int> arr = {17, 201, 505, 93, 333, 757, 604, 80, 988, 681, 249, 569, 635, 659, 692, 183, 780, 465};
vector<int> leadersResult = leaders(arr);
for (int leader : leadersResult) {
    cout << leader << endl;
}
return 0;