Here's the solution:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> dup;
            for(int j = 0; j < lst.size(); j++){
                if(find(dup.begin(), dup.end(), lst[j]) != dup.end())
                    return false;
                else
                    dup.push_back(lst[j]);
            }
            return true;
        }
    }
    return true;
}