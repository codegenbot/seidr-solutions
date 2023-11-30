vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = -1;
    int smallest_positive = -1;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0 && (largest_negative == -1 || lst[i] > largest_negative)){
            largest_negative = lst[i];
        }
        else if(lst[i] > 0 && (smallest_positive == -1 || lst[i] < smallest_positive)){
            smallest_positive = lst[i];
        }
    }
    
    return {largest_negative, smallest_positive};
}