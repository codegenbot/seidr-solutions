#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < vec.size(); ++i) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{vec[0]}, {vec.begin() + cut_index, vec.end()}};
}

int main() {
    vector<int> vec;
    int num;
    cout << "Enter numbers (enter -1 to stop): ";
    while (cin >> num && num != -1) {
        vec.push_back(num);
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "Cut at index " << vec.size() - 1 << endl;
    for (const auto& v : result.first) {
        cout << v << " ";
    }
    cout << endl;
    for (const auto& v : result.second) {
        cout << v << " ";
    }
    cout << endl;
    
    return 0;
}