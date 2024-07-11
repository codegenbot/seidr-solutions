vector<int> pluck(vector<int> arr){
        vector<int> result;
        
        int min_even = -1;
        int min_even_index = -1;
        
        for (int i=0; i<arr.size(); i++){
            if (arr[i] % 2 == 0 && (min_even == -1 || arr[i] < min_even || (arr[i] == min_even && i < min_even_index))){
                min_even = arr[i];
                min_even_index = i;
            }
        }
        
        if (min_even != -1){
            result.push_back(min_even);
            result.push_back(min_even_index);
        }
        
        return result;
    }