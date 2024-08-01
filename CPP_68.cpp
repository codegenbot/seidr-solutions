#include <vector>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    int minEvenIndex = -1;
    int minValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minValue) {
            minValue = arr[i];
            minEvenIndex = i;
        }
    }

    if (minEvenIndex != -1) {
        result.push_back(minValue);
        result.push_back(minEvenIndex);
    }

    return result;
}