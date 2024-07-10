#include <vector>
#include <initializer_list>
#include <limits.h>

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<vector<int>> pluck(vector<vector<int>> arr);

int main() {
    vector<vector<int>> arr = {{7}, {9}, {7}, {1}};
    vector<int> result;
    
    for (const auto& v : arr) {
        if (!v.empty()) {
            int minEven = INT_MAX;
            int minIndex = -1;

            for (int i = 0; i < v.size(); i++) {
                if (v[i] % 2 == 0 && v[i] < minEven) {
                    minEven = v[i];
                    minIndex = i;
                }
            }

            result.push_back(minEven);
            result.push_back(minIndex);
        } else {
            result.push_back(INT_MAX);
            result.push_back(-1);
        }
    }

    if (issame(result, vector<int>())) {
        cout << "The array is empty." << endl;
    } else {
        for (int i = 0; i < result.size(); i += 2) {
            if (result[i] == INT_MAX) {
                cout << "[] ";
            } else {
                cout << "[";
                for (int j = 0; j < arr.size(); j++) {
                    if (j == result[i + 1]) {
                        cout << result[i];
                        break;
                    }
                }
                cout << "] ";
        }
        cout << endl;
    }

    return 0;
}