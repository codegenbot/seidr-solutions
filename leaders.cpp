#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int n = vec.size();
    int max_right = vec.back();
    for(int i=n-1; i>=0; i--){
        if(vec[i] >= max_right){
            res.push_back(vec[i]);
            max_right = vec[i];
        }
    }
    return res;
}

int main() {
    vector<int> vec = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = leaders(vec);
    for(int i : leaders) cout << i << " ";
    return 0;
}