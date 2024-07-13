#include <vector>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    long long diff = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        long long leftSum = 0, rightSum = 0;

        for (size_t j = 0; j <= i; j++) {
            leftSum += v[j];
        }

        for (size_t j = i + 1; j < n; j++) {
            rightSum += v[j];
        }

        if (abs(leftSum - rightSum) == diff) {
            return {{v.begin(), v.begin() + i + 1}, {v.begin() + i + 1, v.end()}};
        } else if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
        }
    }

    return {{v.begin(), v.end()}, {v.begin(), v.end()}};
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    pair<vector<int>, vector<int>> result = cutVector(v);
    // process the result...
    return 0;
}