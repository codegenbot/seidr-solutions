bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            vector<int> temp;
            bool found = false;
            for(int j = 0; j < lst.size(); j++){
                if(!found && lst[j] == lst[i-1])
                    found = true;
                else
                    temp.push_back(lst[j]);
            }
            if(temp.size() != lst.size())
                return false;
            lst = temp;
        }
    }
    return true;
}