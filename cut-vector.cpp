#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i <= vec.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int j = i; j < vec.size(); j++) {
            right_sum += vec[j];
        }

        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    vector<vector<int>> result(2);
    for (int i = 0; i < cut_index; i++) {
        result[0].push_back(vec[i]);
    }
    for (int i = cut_index; i < vec.size(); i++) {
        result[1].push_back(vec[i]);
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> vec[i];
    }

    vector<vector<int>> result = cutVector(vec);

    cout << "Left subvector: ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Right subvector: ";
    for (int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}