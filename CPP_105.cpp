vector<string> by_length(vector<int> arr){
    vector<int> sorted_arr;
    vector<string> result;
    map<int, string> num_map;
    
    num_map[1] = "One";
    num_map[2] = "Two";
    num_map[3] = "Three";
    num_map[4] = "Four";
    num_map[5] = "Five";
    num_map[6] = "Six";
    num_map[7] = "Seven";
    num_map[8] = "Eight";
    num_map[9] = "Nine";
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sorted_arr.push_back(arr[i]);
        }
    }
    
    sort(sorted_arr.begin(), sorted_arr.end());
    reverse(sorted_arr.begin(), sorted_arr.end());
    
    for(int i=0; i<sorted_arr.size(); i++){
        result.push_back(num_map[sorted_arr[i]]);
    }
    
    return result;
}