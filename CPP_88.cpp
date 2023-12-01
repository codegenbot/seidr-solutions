vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if(array.size() == 0)
        return sorted_array;
    
    int sum_first_last = array[0] + array[array.size()-1];
    if(sum_first_last % 2 == 0)
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    else
        sort(sorted_array.begin(), sorted_array.end());
    
    return sorted_array;
}