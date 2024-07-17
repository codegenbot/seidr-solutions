#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for(int i=1; i<n; i++){
        if(abs(v[i]-v[0]) <= abs((n-1-i)*v[i]-v[0])){
            res[0] = v.substr(0, i+1);
            res[1] = v.substr(i);
            break;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    cout << "Subvector 1: ";
    for(auto x : result[0])
        cout << x << " ";
    cout << endl;
    cout << "Subvector 2: ";
    for(auto x : result[1])
        cout << x << " ";
    cout << endl;
    return 0;
}