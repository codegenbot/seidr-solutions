#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    return {vector<int>(vec.begin(), vec.begin() + cut_index), vector<int>(vec.begin() + cut_index, vec.end())};
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(vec);

    cout << "1 ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;

    cout << "0 ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}