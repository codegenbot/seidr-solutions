vector<int> even_odd_count(int num){
    vector<int> counts = {0, 0};
    string str_num = to_string(abs(num));
    
    for (char c : str_num) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    
    return counts;
}