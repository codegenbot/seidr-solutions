#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    
    for(int i = 0; i < k / grid.size(); ++i){
        for(const auto& row : grid){
            for(int num : row){
                result.push_back(num);
            }
        }
    }
    
    return result;
}

int main(){
    assert(minPath({{1, 3}, {3, 2}}, 10) == vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3});
    return 0;
}