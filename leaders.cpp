#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> res;
    
    int max_right = vec.back();
    for(int i=n-1; i>=0; i--) {
        if(vec[i] >= max_right) {
            res.push_back(vec[i]);
            max_right = vec[i];
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