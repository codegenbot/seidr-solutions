int sum = 0;
    for(int i=0; i<q.size(); i++){
        sum += q[i];
    }
    
    if(q.size() % 2 != 0){
        return false;
    }
    
    for(int i=0, j=q.size()-1; i<j; i++, j--){
        if(q[i] != q[j]){
            return false;
        }
    }
    
    if(sum <= w){
        return true;
    } else {
        return false;
    }
}