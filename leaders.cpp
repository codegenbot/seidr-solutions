#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int n = vec.size();
    int maxRight = vec.back();
    for(int i=n-1; i>=0; i--){
        if(vec[i] >= maxRight){
            maxRight = vec[i];
            res.push_back(maxRight);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> vec = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(vec);
    for(int i: result) cout << i << " ";
    return 0;
}