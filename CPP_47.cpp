#include <algorithm>
#include <cassert>
#include <vector>
#include <cmath>

using namespace std;

double median(const vector<int>& l) {
    vector<int> sortedList = l;
    sort(sortedList.begin(), sortedList.end());
    int n = sortedList.size();
    return (n % 2 == 0) ? (sortedList[n/2 - 1] + sortedList[n/2]) / 2.0 : sortedList[n/2];
}

int main() {
    vector<int> l = {8, 1, 3, 9, 9, 2, 7};
    assert(abs(median(l) - 7) < 1e-4);
}