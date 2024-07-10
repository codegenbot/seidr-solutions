Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            bool duplicate = false;
            for(int j = 0; j < i; j++){
                if(find(temp.begin(), temp.end(), lst[j]) != temp.end()){
                    duplicate = true;
                    break;
                }
                temp.push_back(lst[j]);
            }
            if(duplicate) return false;
        } else {
            return false;
        }
    }
    return true;
}