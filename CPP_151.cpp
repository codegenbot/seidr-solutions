double double_the_difference(vector<float> lst){
    double sum = 0;

    for(int i=0; i<lst.size(); i++){
        if(lst[i] >= 0 && floor(lst[i]) == lst[i] && int(lst[i]) % 2 != 0){
            sum += lst[i] * lst[i];
        }
    }

    return sum;
}