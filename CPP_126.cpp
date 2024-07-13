Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            bool duplicateFound = false;
            for(int j = 0; j < i; j++){
                if(std::count(temp.begin(), temp.end(), lst[j]) == 0){
                    temp.push_back(lst[j]);
                } else {
                    duplicateFound = true;
                    break;
                }
            }
            if(!duplicateFound && std::all_of(temp.begin(), temp.end(), [i](int x) { return x <= lst[i-1]; })) {
                return false;
            }
        } else{
            return false;
        }
    }
    return true;
}