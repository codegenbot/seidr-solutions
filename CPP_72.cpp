bool will_it_fly(vector<int> q, int w){
    int sum = 0;
    for(int i=0; i<q.size(); i++){
        sum += q[i];
    }
    if(q == vector<int>(q.rbegin(), q.rend()) && sum <= w){
        return true;
    }
    return false;
}