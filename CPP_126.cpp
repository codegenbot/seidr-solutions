Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            vector<int> temp;
            bool found = false;
            for(auto x : lst) {
                if(found || (x != lst[i-1]))
                    temp.push_back(x);
                else
                    found = true;
            }
            if(temp.size() == 0)
                return false;
            lst = temp;
        }
    }
    return true;
}