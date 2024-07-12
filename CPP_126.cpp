bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            bool duplicate = false;
            for(int j = 0; j < lst.size(); j++){
                int count = 0;
                for(int k = 0; k < lst.size(); k++){
                    if(lst[k] == lst[j]){
                        count++;
                    }
                }
                if(count > 1){
                    duplicate = true;
                    break;
                }
                temp.push_back(lst[j]);
            }
            if(duplicate) return false;
            else return true;
        }
    }
    return true;
}