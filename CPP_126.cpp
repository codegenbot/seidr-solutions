bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            bool found = false;
            for(int j = 0; j < i; j++){
                if(!found && lst[j] == lst[i-1]) found = true;
                else temp.push_back(lst[j]);
            }
            if(found) return false;
            for(int j = i; j < lst.size(); j++){
                if(temp.empty() || temp.back() < lst[j]){
                    temp.push_back(lst[j]);
                }else{
                    bool duplicate = false;
                    for(int k = 0; k < temp.size(); k++){
                        if(temp[k] == lst[j]) {
                            duplicate = true;
                            break;
                        }
                    }
                    if(!duplicate) return false;
                }
            }
        }
    }
    return true;
}