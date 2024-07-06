```c
#include <iostream>
#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<int> result;
    
    // your logic here
    
    return result;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}