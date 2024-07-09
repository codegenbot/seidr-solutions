int sum_squares(vector<int> lst){
    int total = 0;
    for(int i = 0; i < lst.size(); i++){
        if(i % 3 == 0 && i % 4 != 0) // square the number
            total += lst[i] * lst[i];
        else if(i % 4 == 0 && i % 3 != 0) // cube the number
            total += pow(lst[i], 3);
    }
    return total;
}