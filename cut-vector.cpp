#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for (int i = 1; i < n; i++) {
        if (v[i] - v[0] <= v[n-1] - v[i]) {
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
            break;
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }

    vector<vector<int>> result = cutVector(v);

    cout << "[";
    for(int i=0;i<result[0].size();i++){
        if(i==result[0].size()-1){
            cout<<result[0][i];
        }else{
            cout<<result[0][i]<<", ";
        }
    }
    cout<<"]"<<" [";
    for(int i=0;i<result[1].size();i++){
        if(i==result[1].size()-1){
            cout<<result[1][i];
        }else{
            cout<<result[1][i]<<", ";
        }
    }
    cout<<"]\n";

    return 0;
}