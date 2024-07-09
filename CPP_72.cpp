bool will_it_fly(vector<int> q,int w){
    string str = "";
    for(int i=0;i<q.size();i++){
        str += to_string(q[i]);
    }
    if(str == reverse(str).str()){
        int sum = 0;
        for(int i:q){
            sum+=i;
        }
        return sum <= w;
    }else{
        return false;
    }
}