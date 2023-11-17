    vector<int> result;
    // Write your code here
    return result;
}
int main(){
    vector<vector<int>> grid;
    grid.push_back({1,2,3});
    grid.push_back({4,5,6});
    grid.push_back({7,8,9});
    vector<int> res = minPath(grid, 3);
    for(int i = 0; i < res.size(); i++)
        printf("%d ", res[i]);
    return 0;
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
