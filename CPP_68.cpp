#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool sameVectors(vector<int> a, vector<int> b) {
    return a.size() == b.size();
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return vector<pair<int,int>>{}; 

    int minEven = INT_MAX;
    int minIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minEven == INT_MAX) return vector<pair<int,int>>{}; 

    result.push_back({minEven, minIndex});
    return result.size() > 0 ? result : vector<pair<int,int>>{};
}