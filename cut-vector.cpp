#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    pair<int, int> result;

    for (int i = 0; i < n; i++) {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j <= i; j++)
            left_sum += v[j];
        for (int j = i + 1; j < n; j++)
            right_sum += v[j];

        if (left_sum == right_sum) {
            return {{v[0], v[0], v.begin() + 1, v.end()}};
        }

        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            result = make_pair(i, i);
        }
    }

    int cut_index = result.first;
    return {{v.begin(), v.begin() + cut_index}, {v.begin() + cut_index, v.end()}};
}

int main() {
    vector<int> input;
    int num;

    cout << "Enter the numbers (enter -1 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == -1)
            break;
        input.push_back(num);
    }

    pair<vector<int>, vector<int>> result = cutVector(input);

    cout << "Left vector: ";
    for (int x : result.first)
        cout << x << " ";
    cout << endl;

    cout << "Right vector: ";
    for (int x : result.second)
        cout << x << " ";
    cout << endl;

    return 0;
}