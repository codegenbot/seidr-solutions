pair<int, int> largest_smallest_integer(vector<int> lst){
    int max_neg = 0, min_pos = 0;
    for(int num : lst){
        if(num < 0 && num < max_neg){
            max_neg = num;
        }
        if(num > 0 && (num < min_pos || min_pos == 0)){
            min_pos = num;
        }
    }
    return make_pair(max_neg, min_pos);
}