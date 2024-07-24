#include <vector>
#include <iostream>
#include <climits>

using namespace std;

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    vector<pair<int, int>> result;

    if (arr.empty()) return vector<pair<int, int>>();

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        pair<int, int> temp;
        temp.first = minEven;
        temp.second = minIndex;
        result.push_back(temp);
    }

    return result;
}