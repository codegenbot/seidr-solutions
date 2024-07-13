#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] != v[0]) {
            int sum1 = 0, sum2 = 0;
            for (int j = 0; j <= i; j++) {
                sum1 += v[j];
            }
            for (int j = i + 1; j < n; j++) {
                sum2 += v[j];
            }
            if (sum1 == sum2) {
                result.push_back({v.begin(), v.begin() + i + 1});
                result.push_back({v.begin() + i + 1, v.end()});
                return result;
            }
        }
    }
    
    int min_diff = INT_MAX, cut_index = -1;
    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++) {
            sum1 += v[j];
        }
        for (int j = i + 1; j < n; j++) {
            sum2 += v[j];
        }
        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    result.push_back({v.begin(), v.begin() + cut_index + 1});
    result.push_back({v.begin() + cut_index + 1, v.end()});
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    
    for (auto &sub : result) {
        for (int num : sub) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}