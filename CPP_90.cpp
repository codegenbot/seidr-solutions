int next_larger(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    std::sort(lst.begin(), lst.end());
    for(int i = lst.size()-2; i >= 0; i--){
        if(lst[i] != lst[lst.size()-1]){
            return lst[i];
        }
    }
    return -1; 
}