#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    vector<vector<int>> result(2);
    for (int i = 1; i <= vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++)
            left_sum += vec[j];
        for (int j = i; j < vec.size(); j++)
            right_sum += vec[j];
        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            result[0] = vector<int>(vec.begin(), vec.begin() + i);
            result[1].assign(vec.begin() + i, vec.end());
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    vector<vector<int>> res = cutVector(vec);
    cout << "1 ";
    for (auto num : res[0])
        cout << num << " ";
    cout << endl;
    cout << "0 " << res[1][0];
    for (int i = 1; i < res[1].size(); i++)
        cout << " " << res[1][i];
    cout << endl;
    return 0;
}