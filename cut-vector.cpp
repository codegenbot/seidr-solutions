#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        if (i < v.size()) {
            for (int j = 0; j < i; j++) {
                left_sum += v[j];
            }
            for (int j = i; j < v.size(); j++) {
                right_sum += v[j];
            }
        } else {
            left_sum = accumulate(v.begin(), v.end(), 0);
            right_sum = 0;
        }

        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    return {{vector<int>(v.begin(), v.begin() + cut_index)},
            {vector<int>(v.begin() + cut_index, v.end())}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> res = cutVector(v);
    for (vector<int> &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}