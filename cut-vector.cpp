#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    if (n == 0) return {{}}; // If the input vector is empty, return a vector with an empty vector
    
    for (int i = 1; i < n; i++) { 
        int diff1 = abs(v[0] - v[i]);
        int diff2 = abs(v[i] - v[n-1]);
        
        if (diff1 <= diff2) {
            res.push_back({v[0]});
            res.push_back({v[i], v[n-1]});
            return res;
        }
    }
    
    res.push_back(v);
    return res;
}

int main() {
    int n, x;
    vector<int> v;

    // Read the input from user
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    // Call the function to get the result
    vector<vector<int>> res = cutVector(v);

    // Print the output
    for (auto &vec : res) {
        for (int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}