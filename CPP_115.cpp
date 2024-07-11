int count = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                count += grid[i][j];
            }
        }
        int bucket_count = 0;
        while(count > 0){
            count -= capacity;
            bucket_count++;
        }
        return bucket_count;
}