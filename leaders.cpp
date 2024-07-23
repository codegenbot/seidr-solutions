#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = 0; i < arr.size(); ++i) {
        if (rightmost <= arr[i]) {
            rightmost = arr[i];
            if (i == arr.size() - 1 || rightmost >= arr[i + 1])
                result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {19};
    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}