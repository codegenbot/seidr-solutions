int count[10] = {0};
    for(int i=0; i<lst.size(); i++){
        count[lst[i]]++;
        if(count[lst[i]] > 1){
            return false;
        }
        if(i > 0 && lst[i] < lst[i-1]){
            return false;
        }
    }
    return true;
}