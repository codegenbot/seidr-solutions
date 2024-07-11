vector<int> even_odd_count(int num){
    vector<int> count = {0, 0};
    while(num != 0){
        if(num % 2 == 0)
            count[0]++;
        else
            count[1]++;
        num /= 10;
    }
    return count;
}