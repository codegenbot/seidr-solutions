#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < v.size(); i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; j++) {
            sumLeft += v[j];
        }
        
        for (int j = i + 1; j < v.size(); j++) {
            sumRight += v[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i <= pos; i++) {
        left.push_back(v[i]);
    }
    for (int i = pos + 1; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    
    while (n--) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    
    pair<vector<int>, vector<int>> output = cutVector(input);
    
    for (int i : output.first) {
        cout << i << " ";
    }
    cout << "\n";
    
    for (int i : output.second) {
        cout << i << " ";
    }
    cout << "\n";
    
    return 0;
}