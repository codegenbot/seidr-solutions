#include <vector>
#include <algorithm>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    sort(v.begin(), v.end());
    
    int n = v.size();
    if (n % 2 == 0) {
        int mid = n / 2;
        return {{v.begin(), v.begin() + mid}, {v.begin() + mid, v.end()}};
    } else {
        int mid = n / 2;
        return {{v.begin(), v.begin() + mid}, {v.begin() + mid + 1, v.end()}};
    }
}