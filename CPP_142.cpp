int sum_squares(vector<int> lst){
    int total = 0;
    for(int i = 0; i < lst.size(); i++){
        if(i % 3 == 0 && i % 4 != 0) // square
            total += lst[i] * lst[i];
        else if(i % 4 == 0 && i % 3 != 0) // cube
            total += pow(lst[i], 3);
    }
    return total;
}