#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {count(a.begin(), a.end(), 0), count(b.begin(), b.end(), 0)};
}