bool is_sorted(vector<int> lst){
    for(int i=1; i<lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
        int count = 0;
        for(int j=i; j<lst.size(); j++){
            if(lst[j] == lst[i]){
                count++;
                if(count > 1){
                    return false;
                }
            }else{
                break;
            }
        }
    }
    return true;
}