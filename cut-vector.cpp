#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;

    for (int i = 1; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j)
            left_sum += v[j];
        for (int j = i; j < n; ++j)
            right_sum += v[j];

        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            res = {{}, {}};
            for (int j = 0; j < i; ++j)
                res.first.push_back(v[j]);
            for (int j = i; j < n; ++j)
                res.second.push_back(v[j]);
        }
    }

    return res;
}

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    
    vector<int> v(n);
    cout << "Enter the elements of the vector: ";
    for (auto &x : v)
        cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "The first subvector is: ";
    for (int i : res.first)
        cout << i << " ";
    cout << endl;

    cout << "The second subvector is: ";
    for (int i : res.second)
        cout << i << " ";
    cout << endl;

    return 0;
}