#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> res;
    
    if (n == 1) {
        res.push_back(vec[0]);
        return res;
    }
    
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] >= vec[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) res.push_back(vec[i]);
    }
    
    return res;
}

int main() {
    // Your code to test leaders function here
    return 0;
}