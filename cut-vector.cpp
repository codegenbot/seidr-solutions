#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int left_sum = 0;
    for(int i=0; i<v.size(); i++) {
        left_sum += v[i];
    }
    vector<int> left, right;
    for(int i=0; i<v.size(); i++) {
        if(left_sum - v[i] <= v[i]) {
            return {left, right = v.begin(), right + i};
        } else {
            left.push_back(v[i]);
        }
    }
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    auto result = cutVector(v);
    cout << '[';
    for(auto x : result[0]) {
        cout << x << ' ';
    }
    cout << "]\n";
    cout << '[';
    for(int i=result[1]->begin(); i!=result[1]->end(); i++) {
        cout << *i << ' ';
    }
    cout << ']';
    return 0;
}