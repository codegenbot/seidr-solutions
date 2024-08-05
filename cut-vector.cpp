#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    vector<int> res(2);
    
    for(int i = 0; i < n; i++) {
        if(i == n - 1 || v[i] != v[i+1]) {
            res[0] = v[0];
            res[1] = v[i];
            break;
        }
    }
    return res;
}

int main() {
    vector<int> v;
    int n, num;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    vector<int> result = cutVector(v);
    cout << result[0] << endl;
    cout << result[1] << " " << (n > 2 ? 0 : "") << endl;
    
    return 0;
}