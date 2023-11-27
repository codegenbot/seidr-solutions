vector<int> largest_smallest_integers(vector<int> lst){
    int largest_neg = 0;
    int smallest_pos = 0;

    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0 && lst[i] < largest_neg){
            largest_neg = lst[i];
        }

        if(lst[i] > 0 && (lst[i] < smallest_pos || smallest_pos == 0)){
            smallest_pos = lst[i];
        }
    }

    return {largest_neg, smallest_pos};
}