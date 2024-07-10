#include <vector>
#include <algorithm>

using namespace std;

double median(const vector<int>& l) {
    if (l.empty()) {
        return 0.0;
    }
    vector<int> sortedList = l;
    sort(sortedList.begin(), sortedList.end());
    int n = sortedList.size();
    if (n % 2 == 0) {
        return (double)(sortedList[n / 2 - 1] + sortedList[n / 2]) / 2.0;
    } else {
        return sortedList[n / 2];
    }
}