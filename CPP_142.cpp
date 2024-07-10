int sum_squares(vector<int> lst){
    int result = 0;
    for(int i=0; i < lst.size(); i++){
        if(i%3==0 && i%4!=0) // square the number if index is multiple of 3 and not multiple of 4
            result += (lst[i]*lst[i]);
        else if(i%4==0 && i%3!=0) // cube the number if index is multiple of 4 and not multiple of 3
            result += (lst[i]*lst[i]*lst[i]);
        else // do not change the entries in the vector whose indexes are not a multiple of 3 or 4
            result += lst[i];
    }
    return result;
}