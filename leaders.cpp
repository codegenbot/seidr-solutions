#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int n = v.size();
    for(int i=n-1; i>=0; i--){
        bool leader = true;
        for(int j=i+1; j<n; j++){
            if(v[j] >= v[i]){
                leader = false;
                break;
            }
        }
        if(leader){
            res.push_back(v[i]);
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