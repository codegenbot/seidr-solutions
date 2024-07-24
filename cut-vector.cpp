#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> result;
    
    for(int i=0; i<n-1; i++){
        int sumLeft = 0, sumRight = 0;
        
        for(int j=0; j<i; j++) sumLeft += v[j];
        for(int j=i+1; j<n; j++) sumRight += v[j];

        if(abs(sumLeft - sumRight) <= abs(v[i] - sumLeft)){
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
            break;
        }
    }

    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "First half: ";
    for(int x : res.first) cout << x << " ";
    cout << endl;

    cout << "Second half: ";
    for(int x : res.second) cout << x << " ";
    cout << endl;
}