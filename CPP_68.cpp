#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<pair<int, int>> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    pair<int, int> minEvenPair = make_pair(INT_MAX, -1);

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].first % 2 == 0 && arr[i].first < minEvenPair.first) {
            minEvenPair = arr[i];
        }
    }

    result.push_back(minEvenPair);
    return result;
}