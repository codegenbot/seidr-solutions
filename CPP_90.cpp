int next_larger(std::vector<int> lst) {
    int res = -1;
    for(int i = 0; i < lst.size(); i++){
        bool found = false;
        for(int j = i + 1; j < lst.size(); j++){
            if(lst[j] > lst[i]){
                res = lst[i];
                found = true;
                break;
            }
        }
        if(found) break;
    }
    return res;
}