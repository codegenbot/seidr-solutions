bool will_it_fly(vector<int> q,int w){
    for(int i:q) {
        string str = "";
        str += to_string(i);
    }
    if(to_string(q[0]) != reverse(to_string(q[0])).substr(1)) return false;
    int sum=0;
    for(int i:q)sum+=i;
    return sum<=w;