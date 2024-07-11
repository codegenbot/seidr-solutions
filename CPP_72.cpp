bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for(int i : q){
        str += to_string(i);
    }
    reverse(str.begin(),str.end());
    if(str != toString(q)){
        return false;
    }
    int sum = 0;
    for(int i : q){
        sum += i;
    }
    return sum <= w;
}