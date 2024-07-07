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
    
    int max_right = vec.back(); // the rightmost element is always a leader
    for(int i=n-2; i>=0; i--) {
        if(vec[i] >= max_right) {
            res.push_back(vec[i]);
            max_right = vec[i];
        }
    }
    
    return res;
}