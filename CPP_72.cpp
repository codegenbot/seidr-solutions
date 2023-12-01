bool will_it_fly(vector<int> q, int w){
    int sum = 0;
    for(int i=0; i<q.size(); i++){
        sum += q[i];
    }
    if(sum <= w){
        vector<int> temp = q;
        reverse(temp.begin(), temp.end());
        if(temp == q){
            return true;
        }
    }
    return false;
}