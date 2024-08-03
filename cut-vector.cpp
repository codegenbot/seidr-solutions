#include <vector>
#include <iostream> // Add this line
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 1; i++) {
        if(vec[i] != vec[i+1]) {
            result.push_back({{&vec[0], &vec[i]}});
            break;
        }
    }
    result.push_back({{&vec[0], &vec[n-1]}});
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> res = cutVector(vec);
    for(auto v : res) {
        auto start = v[0].front();
        auto end = *v[1].end();
        cout << "[" ;
        for(int x : std::vector<int>(v[0]+v[0].begin(), v[1])) {
            cout << x << " ";
        }
        cout << "] [";
        for(auto it = start+1; it != end ; ++it) {
            cout << *it << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}