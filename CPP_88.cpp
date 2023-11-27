#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array) {
    vector<int> sortedArray = array;

    if (sortedArray.empty()) {
        return sortedArray;
    }

    int sum = sortedArray[0] + sortedArray[sortedArray.size() - 1];

    if (sum % 2 == 0) {
        sort(sortedArray.rbegin(), sortedArray.rend());
    } else {
        sort(sortedArray.begin(), sortedArray.end());
    }

    return sortedArray;
}