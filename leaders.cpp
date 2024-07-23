#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int n = v.size();
    int max_rgt_now = v[n-1];
    res.push_back(max_rgt_now);
    for(int i=n-2; i>=0; i--){
        if(v[i] >= max_rgt_now){
            max_rgt_now = v[i];
            res.push_back(max_rgt_now);
        }
    }
    return res;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> output = leaders(input);
    for(int i: output) {
        cout << i << " ";
    }
    return 0;
}