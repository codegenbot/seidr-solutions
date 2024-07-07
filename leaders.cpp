```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 3, 4, 3, 2, 3, 5, 4}; 
    vector<int> leaders = leaders(vec);
    for (int leader : leaders) {
        cout << leader << " "; 
    }
    return 0;
}

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(vec[j] >= vec[i]) {
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(vec[i]);
    }
    
    return res;
}