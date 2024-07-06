int next_larger(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    std::vector<int> result;
    int next = -1;
    for(int i = 0; i < lst.size(); i++){
        bool found = false;
        for(int j = 0; j < lst.size(); j++){
            if(i != j && lst[i] < lst[j] && (j == lst.size() - 1 || lst[i] < lst[j+1])){
                next = lst[j];
                found = true;
                break;
            }
        }
        if(found) result.push_back(next);
        else result.push_back(lst[i]);
    }
    return next_larger(result);
}