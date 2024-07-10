#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int n = vec.size();
    int max_right = vec.back();
    for(int i=n-1; i>=0; i--){
        if(vec[i] >= max_right){
            max_right = vec[i];
            res.push_back(max_right);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    leaders({12, 10, 8, 6, 4, 2});
    return 0;
}