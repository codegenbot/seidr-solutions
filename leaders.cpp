#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxSeen = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxSeen) {
            result.push_back(arr[i]);
            maxSeen = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}