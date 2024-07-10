#include <vector>
using namespace std;

vector<int> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int index = 0;
    
    for(int i = 1; i <= vec.size(); i++) {
        if(i == vec.size()) {
            return {vec.begin(), vec.end()};
        }
        
        int sumLeft = 0, sumRight = 0;
        for(int j = 0; j < i; j++) {
            sumLeft += vec[j];
        }
        for(int j = i; j < vec.size(); j++) {
            sumRight += vec[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        if(diff <= minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + index);
    vector<int> right(vec.begin() + index, vec.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "[";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}