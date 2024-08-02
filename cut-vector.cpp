#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for(int i = 1; i <= vec.size(); i++) {
        if(i == vec.size() || vec[i-1] != vec[i]) {
            int diff = abs((i > 1 ? vec[0:i-1].back() : 0) - (vec.size() - i >= 1 ? vec[i:].front() : 0));
            if(diff < minDiff) {
                minDiff = diff;
                cutIndex = i;
            }
        }
    }
    return {vector<int>(vec.begin(), vec.begin()+cutIndex), vector<int>(vec.begin()+cutIndex, vec.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<int> result = cutVector(vec);
    for(auto num : result[0]) {
        cout << num << " ";
    }
    cout << endl;
    for(auto num : result[1]) {
        cout << num << " ";
    }
    return 0;
}