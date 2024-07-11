int count_nums(vector<int> n){
    int count = 0;
    for(int i : n){
        bool has_positive_sum = false;
        if(i < 0) i = -i; // make number positive for calculation
        while(i > 0){
            int digit = i % 10;
            i /= 10;
            if(digit != 0 || (i == 0 && digit > 0)) has_positive_sum = true;
        }
        if(has_positive_sum) count++;
    }
    return count;
}