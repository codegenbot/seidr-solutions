vector<int> pluck(vector<int> arr){
        vector<int> result;
        int minVal = INT_MAX;
        int minIndex = -1;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] % 2 == 0 && arr[i] < minVal){
                minVal = arr[i];
                minIndex = i;
            }
        }
        
        if(minIndex != -1){
            result.push_back(minVal);
            result.push_back(minIndex);
        }
        
        return result;
    }