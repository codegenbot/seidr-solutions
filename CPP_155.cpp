vector<int> even_odd_count(int num){
    int even_count = 0, odd_count = 0;
    string str_num = to_string(abs(num));
    for(char c : str_num){
        if((c - '0') % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    return {even_count, odd_count};
}