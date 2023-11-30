vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0;
    int min_positive = 0;
    
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] < 0 && lst[i] < max_negative){
            max_negative = lst[i];
        }
        if(lst[i] > 0 && (lst[i] < min_positive || min_positive == 0)){
            min_positive = lst[i];
        }
    }
    
    return {max_negative, min_positive};
}