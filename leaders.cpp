#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int n = vec.size();
    if(n == 0) return res;
    int max_right = vec[n-1];
    res.push_back(max_right);
    for(int i=n-2; i>=0; i--){
        if(vec[i] >= max_right){
            max_right = vec[i];
            res.push_back(max_right);
        }
    }
    return res;
}

int main() {
    leaders({1, 3, 4, 1, 5, 9});
    return 0;
}