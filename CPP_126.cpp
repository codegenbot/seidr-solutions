Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1)
        return true;

    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1]){
            continue;
        } else {
            vector<int> duplicates;
            int count = 0;
            for(int j = i; j < lst.size() && lst[j] == lst[i]; j++, count++){
                duplicates.push_back(lst[j]);
            }
            if(count > 1)
                return false;
            if(duplicates.size() > 1)
                return false;
        }
    }
    return true;