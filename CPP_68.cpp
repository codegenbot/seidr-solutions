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
        result.second = -1;
        return result;
    }

    vector<int> minEvens;
    int minIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            minEvens.push_back(arr[i]);
            if (minEvens.back() < INT_MAX) {
                minIndex = i;
            }
        }
    }

    if (minEvens.empty()) return {arr, -1};

    result.first = minEvens;
    result.second = minIndex;
    return result;
}