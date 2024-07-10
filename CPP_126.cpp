bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int>::iterator it;
            bool found = false;
            for(it = lst.begin(); it != lst.end(); ++it){
                if(*it == lst[i] && ++found <= 2) {
                    break;
                }
            }
            if(!found || found > 1) return false;
        }
    }
    return true;
}