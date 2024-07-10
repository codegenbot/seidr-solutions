#include <vector>
#include <algorithm>

double median(const vector<int>& l) {
    vector<int> temp = l;
    sort(temp.begin(), temp.end());
    int n = temp.size();
    return (n % 2 == 0) ? (temp[n / 2 - 1] + temp[n / 2]) / 2.0 : temp[n / 2];
}