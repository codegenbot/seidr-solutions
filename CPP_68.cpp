#include <vector>
#include <climits>
#include <iostream>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back({minEven, minIndex});
    }

    return result;
}

vector<pair<int, int>> main_function() {
    vector<pair<int, int>> output = pluck({7, 9, 7, 1});
    
    for (const auto& pair : output) {
        cout << "Pair: (" << pair.first << ", " << pair.second << ")" << endl;
    }
    return output;
}