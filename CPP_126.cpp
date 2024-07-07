Here is the completed code:

bool is_sorted(vector<int> lst){
    if (lst.size() < 2) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            for(int j = 0; j < i; j++){
                temp.push_back(lst[j]);
            }
            bool has_duplicates = false;
            for(int k = 0; k < temp.size(); k++){
                int count = 0;
                for(int m = 0; m < lst.size(); m++){
                    if(temp[k] == lst[m]) count++;
                }
                if(count > 1){
                    has_duplicates = true;
                    break;
                }
            }
            return !has_duplicates;
        } else {
            return false;
        }
    }
    return false;
}