#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    vector<int> left_vec;
    vector<int> right_vec;

    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            left_vec = {vec[0], vec[i]};
            right_vec = {vec[i + 1], vec.back()};
        }
    }

    return {left_vec, right_vec};
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<vector<int>> result = cutVector(vec);

    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << result[0][i];
    }
    cout << "]";

    cout << endl;

    cout << "[";
    for (int i = 0; i < result[1].size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << result[1][i];
    }
    cout << "]," << endl;

    return 0;
}