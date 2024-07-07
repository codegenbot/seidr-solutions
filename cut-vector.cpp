#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for(int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if(diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{vec.begin(), vec.begin() + cut_index}, {vec.begin() + cut_index, vec.end()}};
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<vector<int>> result = cutVector(vec);

    for(auto v : result) {
        for(auto num : v) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}