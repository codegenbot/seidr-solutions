#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int max_right = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    leaders.push_back(arr.back());
    return leaders;
}

vector<int> result = leaders({16, 17, 4, 3, 5, 2, 8, 9, 1, 3});
for (int num : result) {
    cout << num << " ";
}