vector<int> even_odd_count(int num){
    vector<int> count(2, 0);
    string str_num = to_string(abs(num));
    for(char c : str_num){
        if((c - '0') % 2 == 0){
            count[0]++;
        }
        else{
            count[1]++;
        }
    }
    return count;
}