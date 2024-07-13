#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    if (n == 0) {
        return {{}};
    }
    
    if (n == 1) {
        return {v, {}};
    }
    
    vector<pair<int, int>> pairs;
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(v[i] - v[i + 1]);
        pairs.push_back({diff, i});
    }
    
    sort(pairs.begin(), pairs.end());
    
    if (pairs[0].first == 0) {
        res.push_back(v);
        res.push_back({});
    } else {
        int index = pairs[0].second;
        res.push_back(vector<int>(v.begin(), v.begin() + index));
        res.push_back(vector<int>(v.begin() + index, v.end()));
    }
    
    return res;
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
    
    vector<vector<int>> output = cutVector(input);
    
    for (const auto& v : output) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}