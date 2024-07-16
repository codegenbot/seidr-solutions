#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    for (int i = 0; i < result.size(); ++i) {
        for (int j = i + 1; j < result.size(); ++j) {
            if (result[j] >= result[i]) {
                result.erase(result.begin() + i);
                --i;
                break;
            }
        }
    }
    return result;
}