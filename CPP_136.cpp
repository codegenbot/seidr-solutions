vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largest = INT_MIN;
    int smallest = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest){
            largest = num;
        }
        if(num > 0 && num < smallest){
            smallest = num;
        }
    }
    
    result[0] = (largest != INT_MIN) ? largest : 0;
    result[1] = (smallest != INT_MAX) ? smallest : 0;
    
    return result;
}