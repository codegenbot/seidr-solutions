#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> res;
    
    if(n == 0) return res;
    
    res.push_back(vec[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(res.back() <= vec[i]) {
            res.clear();
            res.push_back(vec[i]);
        } else if(res.back() == vec[i]) {
            res.push_back(vec[i]);
        }
    }
    
    return res;
}

int main() {
    vector<int> vec = {1, 3, 4, 3, 2, 3, 10, 12};
    vector<int> result = leaders(vec);
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}