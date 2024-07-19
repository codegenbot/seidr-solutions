vector<int> even_odd_count(int num){
    vector<int> count(2, 0);
    string numStr = to_string(abs(num));
    for(char c : numStr){
        if(c != '-' && (c - '0') % 2 == 0){
            count[0]++;
        } else if(c != '-'){
            count[1]++;
        }
    }
    return count;
}