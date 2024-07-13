bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            vector<int> temp;
            bool duplicate = false;
            for(int j = 0; j < lst.size(); j++){
                int count = 0;
                for(int k = 0; k < lst.size(); k++){
                    if(j == k) continue;
                    if(lst[j] == lst[k]) count++;
                }
                if(count > 1){
                    duplicate = true;
                    break;
                }
                temp.push_back(lst[j]);
            }
            if(duplicate) return false;
            else return i == lst.size() - 1;
        }
    }
    return true;
}