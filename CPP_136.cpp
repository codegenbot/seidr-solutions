vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result;
    int largest_neg = 0;
    int smallest_pos = 0;
    
    for(int num : lst){
        if(num < 0 && num < largest_neg){
            largest_neg = num;
        }
        if(num > 0 && (num < smallest_pos || smallest_pos == 0)){
            smallest_pos = num;
        }
    }
    
    result.push_back(largest_neg);
    result.push_back(smallest_pos);
    
    return result;
}