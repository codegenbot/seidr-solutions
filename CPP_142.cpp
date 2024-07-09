int sum_squares(vector<int> lst){
    int result = 0;
    for(int i = 0; i < lst.size(); i++){
        if(i%3 == 0 && i%4 != 0) // index is multiple of 3, not a multiple of 4
            result += lst[i] * lst[i];
        else if(i%4 == 0 && i%3 != 0) // index is multiple of 4, not a multiple of 3
            result += pow(lst[i], 3);
    }
    return result;
}