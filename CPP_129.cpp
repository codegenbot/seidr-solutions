#include <vector>
#include <queue>
using namespace std;

int issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) 
        return 0;
    for(int i = 0; i < v1.size(); i++) 
        if(v1[i] != v2[i]) 
            return 0;
    return 1;
}

vector<int> minPath(vector<vector<int>>& grid, int k) {
    // your code here...
}