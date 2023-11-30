vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    
    result[0] = largest_negative != INT_MIN ? largest_negative : 0;
    result[1] = smallest_positive != INT_MAX ? smallest_positive : 0;
    
    return result;
}