int sum = 0;
    for(int i=0; i<q.size(); i++){
        sum += q[i];
    }
    bool balanced = true;
    for(int i=0, j=q.size()-1; i<j; i++, j--){
        if(q[i] != q[j]){
            balanced = false;
            break;
        }
    }
    return balanced && sum <= w;
}