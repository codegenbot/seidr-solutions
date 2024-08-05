#include <vector>
using namespace std;

vector<int> leaders(vector<int> arr) {
    vector<int> leaders;
    int max_right = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}