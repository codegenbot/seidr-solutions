#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRight = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int leader = arr.back();
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            result.push_back(arr[i]);
            leader = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {5, 2, 3, 4};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << std::endl;
    }
    return 0;
}