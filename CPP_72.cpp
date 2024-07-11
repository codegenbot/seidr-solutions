bool will_it_fly(vector<int> q,int w){
    bool isBalanced = true;
    for(int i = 0; i < (int)q.size(); i++){
        if(q[i] != q[(int)q.size() - i - 1]){
            isBalanced = false;
            break;
        }
    }
    return isBalanced && accumulate(q.begin(), q.end(), 0) <= w;
}