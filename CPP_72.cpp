bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for(int i : q){
        str += to_string(i);
    }
    bool balanced = (str == reverse(str).substr(0, str.length()));
    
    long sum = 0;
    for(int i : q) {
        sum += i;
    }

    return balanced && sum <= w;
}