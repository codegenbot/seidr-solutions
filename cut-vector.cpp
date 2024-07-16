#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            res[0].insert(res[0].end(), v.begin(), v.end());
            return {{}, res[0]};
        }
    }
    int mid = n / 2;
    res[0] = vector<int>(v.begin(), v.begin() + mid);
    res[1] = vector<int>(v.begin() + mid, v.end());
    return res;
}

int main() {
    vector<int> v;
    int num;
    
    cout << "Enter the number of elements in the vector: ";
    cin >> num;
    
    cout << "Enter the elements of the vector (space-separated): ";
    for(int i=0; i<num; i++) {
        cin >> v.push_back(i);
    }
    
    vector<vector<int>> result = cutVector(v);
    
    cout << "Left subvector: ";
    for(auto x : result[0]) 
        cout << x << " ";
    cout << endl;
    
    cout << "Right subvector: ";
    for(auto x : result[1])
        cout << x << " ";
    cout << endl;
    
    return 0;
}