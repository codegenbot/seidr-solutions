Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i + 1]){
            bool dupFound = false;
            for(int j = 0; j < lst.size(); j++){
                if(j != i && lst[j] == lst[i]){
                    dupFound = true;
                    break;
                }
            }
            if(dupFound) return false;
        }
    }
    return true;
}