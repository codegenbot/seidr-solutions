vector<int> even_odd_count(int num){
    string strNum = to_string(abs(num));
    vector<int> counts(2);
    for(char c : strNum) {
        if(c % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}