bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            bool has_duplicates = false;
            for(int j = 0; j < lst.size(); j++){
                int count = 0;
                for(int k = 0; k < lst.size(); k++){
                    if(lst[j] == lst[k]){
                        count++;
                    }
                }
                if(count > 1){
                    has_duplicates = true;
                    break;
                }
                temp.push_back(lst[j]);
            }
            if(has_duplicates) return false;
            else return true;
        }
    }
    vector<int> temp;
    bool has_duplicates = false;
    for(int i = 0; i < lst.size(); i++){
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[i] == lst[j]){
                count++;
            }
        }
        if(count > 1){
            has_duplicates = true;
            break;
        }
        temp.push_back(lst[i]);
    }
    if(has_duplicates) return false;
    else return true;
}