```cpp
#include <climits>
#include <vector>

using namespace std;

vector<pair<int, int>>() pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return {};

    for (int i = 0; i < arr.size(); i++) {
        bool isEven = false;
        int smallestIndex = -1;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] % 2 == 0) {
                isEven = true;
                if (arr[j] < arr[i]) {
                    smallestIndex = i;
                }
            }
        }

        if (isEven) {
            result.push_back({arr[smallestIndex], smallestIndex});
            for(int j = 0; j < arr.size(); j++) {
                arr.erase(arr.begin() + smallestIndex);
                break;
            }
        } else {
            result.push_back({arr[i], i});
            arr.erase(arr.begin() + i);
            break;
        }
    }

    return result;
}