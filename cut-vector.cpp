#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int index = -1;
    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            index = i;
        }
    }

    vector<int> left = vector<int>(vec.begin(), vec.begin() + index);
    vector<int> right = vector<int>(vec.begin() + index, vec.end());
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(vec);

    cout << "Left: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Right: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}