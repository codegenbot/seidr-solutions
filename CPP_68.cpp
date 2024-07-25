vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_even = -1;
    int index = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)){
            smallest_even = arr[i];
            index = i;
        }
    }
    
    if(index != -1){
        result.push_back(smallest_even);
        result.push_back(index);
    }
    
    return result;
}