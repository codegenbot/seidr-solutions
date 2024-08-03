```cpp
bool is_sorted(vector<int> lst){
    if(lst.size() <= 1)
        return true;

    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1])
            return false;
    }

    vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(*it > 0 && *(it-1) == *it)
            return false;
    }
    return true;