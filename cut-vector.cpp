#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    pair<int, int> res;
    for (int i = 1; i <= vec.size(); ++i) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; ++j)
            leftSum += vec[j];
        for (int j = i; j < vec.size(); ++j)
            rightSum += vec[j];

        if (leftSum == rightSum) {
            return {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        }

        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            res = make_pair(i, 0);
        }
    }

    int leftSize = res.first;
    return {{vec.begin(), vec.begin() + leftSize}, {vec.begin() + leftSize, vec.end()}};
}

int main() {
    // Your test cases here
    vector<int> vec1 = {1};
    pair<vector<int>, vector<int>> result1 = cutVector(vec1);
    for (int i : *result1.first)
        cout << i << " ";
    cout << endl;
    for (int i : *result1.second)
        cout << i << " ";
    cout << endl;

    // Your test cases here
    vector<int> vec2 = {1, 10};
    pair<vector<int>, vector<int>> result2 = cutVector(vec2);
    for (int i : *result2.first)
        cout << i << " ";
    cout << endl;
    for (int i : *result2.second)
        cout << i << " ";
    cout << endl;

    return 0;
}