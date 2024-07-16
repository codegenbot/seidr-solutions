```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    int n = v.size();
    vector<int> res;
    int max_right = v[n-1];
    for(int i=n-1; i>=0; i--) {
        if(v[i] >= max_right) {
            res.push_back(v[i]);
            max_right = v[i];
        }
    }
    return res;
}

int main() {
    vector<int> v = {16, 17, 4, 3, 5};
    vector<int> result = leaders(v);
    for(int i: result) {
        cout << i << " ";
    }
    return 0;
}