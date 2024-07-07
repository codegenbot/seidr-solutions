#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<pair<int, int>> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) return result;

    int minEvenValue = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].first % 2 == 0 && arr[i].first < minEvenValue) {
            minEvenValue = arr[i].first;
            index = i;
        }
    }

    result.push_back({minEvenValue, index});
    return result;
}