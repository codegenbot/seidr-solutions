#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int leader = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] <= leader) {
            result.push_back(leader);
            leader = arr[i];
        }
    }
    result.push_back(arr[0]);
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