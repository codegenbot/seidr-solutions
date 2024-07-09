Here is the completed code:

bool will_it_fly(vector<int> q,int w){
    string s = "";
    for(int i=0; i<q.size();i++){
        s += to_string(q[i]);
    }
    if(s!=s.reverse()){
        return false;
    }
    int sum = 0;
    for(auto x: q){
        sum+=x;
    }
    return sum <= w;
}