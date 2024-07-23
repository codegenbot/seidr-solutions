#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int n = v.size();
    int max_r = v[n-1];
    for(int i=n-1; i>=0; i--){
        if(v[i] >= max_r){
            res.push_back(v[i]);
            max_r = v[i];
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