#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;

    for (int i = 0; i < n; i++) {
        vector<int> left(vec.begin(), vec.begin() + i);
        vector<int> right(vec.begin() + i, vec.end());
        int diff = absaccumulate(left.begin(), left.end(), 0) - absaccumulate(right.begin(), right.end(), 0);
        if (diff < min_diff) {
            res.first = left;
            res.second = right;
            min_diff = diff;
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << accumulate(result.first.begin(), result.first.end(), 0) << endl;
    cout << accumulate(result.second.begin(), result.second.end(), 0) << endl;

    return 0;
}