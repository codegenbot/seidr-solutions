int next_larger(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    std::vector<int> result;
    int max = -1;
    for(int i = lst.size()-1; i >=0 ; i--){
        for(int j = i-1; j>=0; j--) {
            if (lst[j] > lst[i]) {
                max = lst[i];
                break;
            }
        }
        if(max != -1) break;
    }
    return max; 
}