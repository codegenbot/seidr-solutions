#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int n = vec.size();
    int max_right = vec[n-1];
    for(int i=n-1; i>=0; i--){
        if(vec[i] >= max_right){
            res.push_back(vec[i]);
            max_right = vec[i];
        }
    }
    return res;
}

int main() {
    leaders({});
    return 0;
}