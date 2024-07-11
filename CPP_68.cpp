#include <vector>
using namespace std;

vector<std::vector<int>> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return {{}, 0};

    int minEvenVal = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            minIndex = i;
        }
    }

    result.push_back({minEvenVal});
    result.push_back({minIndex});

    return {{}, 0};
}