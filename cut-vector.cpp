#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < vec.size(); ++i) {
        int diff = abs(vec[i] - vec[0]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{vec.begin(), vec.begin() + cut_index}, {vec.begin() + cut_index, vec.end()}};
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        input.push_back(num);
    }
    
    pair<vector<int>, vector<int>> result = cutVector(input);
    
    cout << "[";
    for (int i = 0; i < result.first.size(); ++i) {
        cout << result.first[i];
        if (i != result.first.size() - 1)
            cout << ", ";
    }
    cout << "]\n[";
    for (int i = 0; i < result.second.size(); ++i) {
        cout << result.second[i];
        if (i != result.second.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
    
    return 0;
}