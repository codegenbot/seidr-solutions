#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<int, int> split_index;
    for (int i = 1; i < v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            split_index = {i, i};
        }
    }
    int index = split_index.first;
    return {{v.begin(), v.begin() + index}, {v.begin() + index, v.end()}};
}

int main() {
    // Test cases
    vector<int> input1 = {1};
    pair<vector<int>, vector<int>> output1 = cutVector(input1);
    cout << "Input: ";
    for (int num : input1) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left subvector: ";
    for (int num : output1.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right subvector: ";
    for (int num : output1.second) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> input2 = {1, 10};
    pair<vector<int>, vector<int>> output2 = cutVector(input2);
    cout << "Input: ";
    for (int num : input2) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left subvector: ";
    for (int num : output2.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right subvector: ";
    for (int num : output2.second) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> input3 = {1, 100};
    pair<vector<int>, vector<int>> output3 = cutVector(input3);
    cout << "Input: ";
    for (int num : input3) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left subvector: ";
    for (int num : output3.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right subvector: ";
    for (int num : output3.second) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> input4 = {1, 1000};
    pair<vector<int>, vector<int>> output4 = cutVector(input4);
    cout << "Input: ";
    for (int num : input4) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left subvector: ";
    for (int num : output4.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right subvector: ";
    for (int num : output4.second) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> input5 = {1, 10000};
    pair<vector<int>, vector<int>> output5 = cutVector(input5);
    cout << "Input: ";
    for (int num : input5) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left subvector: ";
    for (int num : output5.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right subvector: ";
    for (int num : output5.second) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}