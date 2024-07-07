Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int> duplicates;
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] == lst[i+1]){
            bool found = false;
            for(int j = 0; j < duplicates.size(); j++){
                if(duplicates[j] == lst[i]){
                    found = true;
                    break;
                }
            }
            if(!found){
                duplicates.push_back(lst[i]);
            }
        }
    }
    return duplicates.size() == 0;
}