#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRightSoFar = arr.back();
    for(int i = arr.size() - 2; i >= 0; i--) {
        if(arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            result.push_back(maxRightSoFar);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {16, 901, 353, 533, 259, 791, 187, 337, 68, 152, 597, 469, 738, 18, 971, 407, 209};
    vector<int> leadersResult = leaders(arr);
    for (auto x : leadersResult) {
        cout << x << " ";
    }
    return 0;
}