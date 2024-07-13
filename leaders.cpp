#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int max_right = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    return result;
}