bool issame(vector<int> path1, vector<int> path2){
        if(path1.size() != path2.size()){
            return false;
        }
        
        for(int i=0; i<path1.size(); i++){
            if(path1[i] != path2[i]){
                return false;
            }
        }
        
        return true;
    }

    vector<int> minPath(vector<vector<int>> grid, int k){
        vector<int> path;
        
        int n = grid.size();
        int m = grid[0].size();
        
        // Add your code here to find the minimum path
        
        return path;
    }

    int main() {
        // Add code to read input, call minPath function and then call issame function
        return 0;
    }