#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result(2);
    
    if (n == 1) {
        result[0].push_back(vec[0]);
        result[1].push_back(vec[0]);
    } else {
        for (int i = 0; i < n - 1; i++) {
            int sumLeft = 0, sumRight = 0;
            for (int j = 0; j <= i; j++)
                sumLeft += vec[j];
            for (int j = i + 1; j < n; j++)
                sumRight += vec[j];

            if (sumLeft == sumRight) {
                result[0].insert(result[0].end(), vec.begin(), vec.begin() + i + 1);
                result[1].insert(result[1].begin(), vec.begin() + i, vec.end());
                return result;
            }
        }

        int minDiff = INT_MAX, cutIndex = -1;
        for (int i = 0; i < n - 1; i++) {
            int sumLeft = 0, sumRight = 0;
            for (int j = 0; j <= i; j++)
                sumLeft += vec[j];
            for (int j = i + 1; j < n; j++)
                sumRight += vec[j];

            if (abs(sumLeft - sumRight) < minDiff) {
                minDiff = abs(sumLeft - sumRight);
                cutIndex = i;
            }
        }

        result[0].insert(result[0].end(), vec.begin(), vec.begin() + cutIndex + 1);
        result[1].insert(result[1].begin(), vec.begin() + cutIndex, vec.end());
    }

    return result;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    
    vector<vector<int>> result = cutVector(vec);
    for (auto &v : result) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}