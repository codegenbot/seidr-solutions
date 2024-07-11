Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i=1; i<lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
        bool has_duplicates = false;
        for(int j=0; j<lst.size(); j++){
            int count = 0;
            for(int k=j; k<lst.size(); k++){
                if(lst[j] == lst[k]){
                    count++;
                }
                if(count > 1){
                    has_duplicates = true;
                    break;
                }
            }
        }
        return !has_duplicates;
    }
    return true;
}