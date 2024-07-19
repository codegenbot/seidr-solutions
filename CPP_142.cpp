int sum_squares(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i){
        if (i % 3 == 0){
            lst[i] = lst[i] * lst[i]; // Square the integer entry
        } else if (i % 4 == 0){
            lst[i] = lst[i] * lst[i] * lst[i]; // Cube the integer entry
        }
        sum += lst[i];
    }
    return sum;
}