bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            for(int j = 0; j < i; j++){
                temp.push_back(lst[j]);
            }
            for(int k = i; k < lst.size(); k++){
                bool found = false;
                for(int m = 0; m < temp.size(); m++){
                    if(temp[m] == lst[k]){
                        found = true;
                        break;
                    }
                }
                if(!found){
                    return false;
                }
            }
        } else {
            return false;
        }
    }
    return true;
}