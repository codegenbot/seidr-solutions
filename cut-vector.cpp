#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i <= n / 2; i++) {
        int left_sum = 0;
        int right_sum = 0;

        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }

        for (int j = i; j < n; j++) {
            right_sum += vec[j];
        }

        if (left_sum == right_sum) {
            return {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            cut_index = i;
        }
    }

    int left_sum = 0;
    int right_sum = 0;

    for (int i = 0; i < n; i++) {
        left_sum += vec[i];
    }

    right_sum = left_sum - vec[cut_index];

    return {{vec.begin(), vec.begin() + cut_index}, {vec.begin() + cut_index, vec.end()}};
}

int main() {
    vector<int> vec;
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        vec.push_back(num);
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "Left subvector: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Right subvector: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}