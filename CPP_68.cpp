vector<int> pluck(vector<int> arr){
    int min_even_value = INT_MAX, min_index = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < min_even_value){
            min_even_value = arr[i];
            min_index = i;
        }
    }
    if(min_even_value != INT_MAX){
        vector<int> result;
        result.push_back(min_even_value);
        result.push_back(min_index);
        return result;
    }else{
        vector<int> result;
        result.push_back(0);
        result.push_back(-1);
        return result;
    }
}