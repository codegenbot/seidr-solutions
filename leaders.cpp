#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int max_right = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= max_right) {
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return result;
}