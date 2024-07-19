#include <vector>
double median(const vector<int>& l) {
    vector<int> sortedList = l;
    sort(sortedList.begin(), sortedList.end());
    int n = sortedList.size();
    return n % 2 == 0 ? (sortedList[n / 2 - 1] + sortedList[n / 2]) / 2.0 : sortedList[n / 2];
}