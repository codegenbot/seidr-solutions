bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            bool has_duplicates = false;
            for(int j = 0; j < lst.size(); j++){
                int count = 0;
                for(int k = 0; k < lst.size(); k++){
                    if(lst[k] == lst[j]) count++;
                }
                if(count > 1) {
                    has_duplicates = true;
                    break;
                }
                temp.push_back(lst[j]);
            }
            if(has_duplicates) return false;
            else return false;
        }
    }
    return true;
}