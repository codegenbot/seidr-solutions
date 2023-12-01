vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] < 0 && lst[i] < largest_negative){
            largest_negative = lst[i];
        }
        if(lst[i] > 0 && (smallest_positive == 0 || lst[i] < smallest_positive)){
            smallest_positive = lst[i];
        }
    }
    
    return {largest_negative, smallest_positive};
}