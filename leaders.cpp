#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (i == arr.size() - 1 || arr[i] >= arr.back()) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersVector = leaders(arr);
    for (auto leader : leadersVector) {
        cout << leader << endl;
    }
    return 0;
}