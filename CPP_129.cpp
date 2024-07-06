#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> result;
    //your implementation here
    for(auto path: {{1,2},{0,1},{1,1}}){
        bool same=false;
        for(int i=0;i<path.size();i++){
            if(!issame(grid[path[i][0]],grid[path[i][1]]))same=true;break;
        }
        if(same) result.push_back(k);
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    std::vector<int> result = minPath(grid, k);
    for (auto val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}