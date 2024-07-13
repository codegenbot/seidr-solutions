#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int min_diff = INT_MAX;
    pair<int, int> cuts;
    for (int i = 1; i <= v.size(); ++i) {
        long long sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j)
            sum1 += v[j];
        for (int j = i; j < v.size(); ++j)
            sum2 += v[j];
        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            cuts = {i, 0};
        }
    }
    return {{v.begin(), v.end() - cuts.second}, {v.begin() + cuts.first, v.end()}};
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cout << "Enter element: ";
        cin >> num;
        v.push_back(num);
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Cut Vector:\n";
    for (const auto& vec : {result.first, result.second}) {
        for (int x : vec) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}