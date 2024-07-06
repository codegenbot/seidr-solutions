```
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool compareVectors(vector<int> a, vector<int> b) {
    return a.size() == b.size();
}

pair<vector<int>, int> pluck(vector<int> arr) {
    pair<vector<int>, int> result;
    if (arr.empty()) {
        result.first = arr;
        result.second = 0;
        return result;
    }

    int minEven = INT_MAX;
    int minIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minEven == INT_MAX) {
        result.first = arr;
        result.second = -1;
        return result;
    }

    vector<int> tempArr = arr;
    tempArr.erase(remove(tempArr.begin(), tempArr.end(), minEven), tempArr.end());
    result.first = tempArr;
    result.second = minIndex;
    return result;
}