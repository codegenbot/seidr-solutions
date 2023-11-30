vector<int> even_odd_count(int num){
    vector<int> count(2, 0);
    string num_str = to_string(abs(num));
    for(char c : num_str){
        int digit = c - '0';
        if(digit % 2 == 0){
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}