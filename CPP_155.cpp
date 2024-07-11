vector<int> even_odd_count(int num){
    vector<int> count(2, 0); // {even_count, odd_count}
    string num_str = to_string(abs(num));
    for(char c : num_str){
        int digit = c - '0';
        if(digit % 2 == 0){
            count[0]++; // increment even count
        } else {
            count[1]++; // increment odd count
        }
    }
    return count;
}