#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;

}

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    leaders.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= leaders.back()) {
            leaders.push_back(arr[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}