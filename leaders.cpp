#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int n = v.size();
    int max_rgt = v[n-1];
    for(int i=n-1; i>=0; i--){
        if(v[i] >= max_rgt){
            res.push_back(v[i]);
            max_rgt = v[i];
        }
    }
    return res;
}

int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2};
    vector<int> res = leaders(v);
    for(int i : res){
        cout << i << " ";
    }
    return 0;
}