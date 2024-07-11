int total = 0;
    for(int i : q){
        total += i;
    }
    if(total > w || q != vector<int>(q.rbegin(), q.rend())){
        return false;
    }
    return true;
}