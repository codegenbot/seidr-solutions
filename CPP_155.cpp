vector<int> even_odd_count(int num){
    vector<int> counts(2, 0);
    string num_str = to_string(abs(num));
    for(char c : num_str){
        if((c - '0') % 2 == 0)
            counts[0]++;
        else
            counts[1]++;
    }
    return counts;
}