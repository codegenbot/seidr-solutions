vector<int> even_odd_count(int num){
    vector<int> count(2,0);
    string s = to_string(abs(num));
    for(int i=0; i<s.length(); i++){
        if((s[i]-'0')%2 == 0)
            count[0]++;
        else
            count[1]++;
    }
    return count;
}