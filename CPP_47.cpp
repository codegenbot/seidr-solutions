#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

using namespace std;

double median(const vector<int>& l) {
    if (l.empty()) {
        return 0.0; // Return default value for empty list
    }
    vector<int> sortedList = l;
    sort(sortedList.begin(), sortedList.end());
    int n = sortedList.size();
    if (n == 1) {
        return sortedList[0];
    }
    return n % 2 == 0 ? (double)(sortedList[n / 2 - 1] + sortedList[n / 2]) / 2.0 : sortedList[n / 2];
}