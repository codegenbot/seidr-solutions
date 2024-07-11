#include <vector>
using namespace std;

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int smallestEven = INT_MAX;
    int index = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }

    return {{smallestEven, index}};
}