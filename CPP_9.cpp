#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> maxs;
    int currentMax = INT_MIN;
    for (int num : numbers) {
        if (num > currentMax) {
            currentMax = num;
        }
        maxs.push_back(currentMax);
    }
    return maxs;
}