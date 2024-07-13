#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int index = -1;
    for (int i = 0; i < v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++)
            left_sum += v[j];
        for (int j = i + 1; j < v.size(); j++)
            right_sum += v[j];

        if (left_sum == right_sum) {
            return {{v[0], v.begin() + 1, v.end()}};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            index = i;
        }
    }

    int left_sum = 0;
    for (int i = 0; i < index; i++)
        left_sum += v[i];
    int right_sum = 0;
    for (int i = index + 1; i < v.size(); i++)
        right_sum += v[i];

    return {{v.begin(), v.begin() + index}, {v.begin() + index, v.end()}};
}

int main() {
    // Read input from user
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    pair<vector<int>, vector<int>> result = cutVector(v);

    // Print output
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if (i < result.first.size() - 1)
            cout << " ";
    }
    cout << "] [";

    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if (i < result.second.size() - 1)
            cout << " ";
    }

    cout << "]" << endl;
    return 0;
}