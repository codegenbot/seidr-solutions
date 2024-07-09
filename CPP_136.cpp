vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = 0, min_positive = INT_MAX;
    for(int x : lst){
        if(x < 0 && x > max_negative) max_negative = x;
        else if(x > 0 && x < min_positive) min_positive = x;
    }
    return {(max_negative >= 0)? 0 : max_negative, (min_positive <= 0)? 0 : min_positive};
}