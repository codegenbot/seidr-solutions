vector<string> by_length(vector<int> arr){
    vector<int> sorted_arr;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sorted_arr.push_back(arr[i]);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());
    reverse(sorted_arr.begin(), sorted_arr.end());
    
    vector<string> result;
    map<int, string> num_to_name;
    num_to_name[1] = "One";
    num_to_name[2] = "Two";
    num_to_name[3] = "Three";
    num_to_name[4] = "Four";
    num_to_name[5] = "Five";
    num_to_name[6] = "Six";
    num_to_name[7] = "Seven";
    num_to_name[8] = "Eight";
    num_to_name[9] = "Nine";
    
    for(int i=0; i<sorted_arr.size(); i++){
        result.push_back(num_to_name[sorted_arr[i]]);
    }
    
    return result;
}