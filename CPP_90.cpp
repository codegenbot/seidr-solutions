int next_larger(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for(int i = 0; i < sorted.size(); i++){
        if(i == 0) continue;
        if(sorted[i] > sorted[i-1]){
            return sorted[i-1];
        }
    }
    return -1; 
}