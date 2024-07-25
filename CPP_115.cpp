int count = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                count += grid[i][j];
            }
        }
        return (count + capacity - 1) / capacity;
    }