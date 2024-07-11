int fizz_buzz(int n){
    int count = 0;
    for(int i = 1; i < n; i++){
        if(i % 11 == 0 || i % 13 == 0){
            string str = to_string(i);
            count += count_if(str.begin(), str.end(), [](char c){ return c == '7'; });
        }
    }
    return count;
}