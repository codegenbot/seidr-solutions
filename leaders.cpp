#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int current_leader = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= current_leader) {
            current_leader = arr[i];
            result.push_back(current_leader);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders_result = leaders(arr);
    for (int leader : leaders_result) {
        cout << leader << " ";
    }
    return 0;
}