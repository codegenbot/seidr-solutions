#include <vector>
#include <cassert>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> findKPositions(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == k) {
                for(int x=0;x<grid.size();++x){
                    for(int y=0;y<grid[0].size();++y){
                        if((i+x)%2==0&&y==j|| (i+x+1)%2!=0&&y!=j)
                            grid[x][y]=k+1;
                    }
                }
            }
        }
    }
    return result;
}

int main() {
    assert(isSame(findKPositions({{1, 3}, {3, 2}}, 10), vector<int>({1, 3, 1, 3, 1, 3, 1, 3, 1, 3})));
    return 0;
}