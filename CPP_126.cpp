Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;

    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int> temp;
            for(int j = 0; j < lst.size(); j++){
                if(j == i || j == i+1) continue;
                temp.push_back(lst[j]);
            }
            return !is_sorted(temp);
        }
    }

    return false;
}