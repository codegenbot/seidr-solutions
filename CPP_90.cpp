int next_smallest(vector<int> lst) {
    vector<int> copy = lst; 
    if(copy.size() < 2) return -1;  
    std::sort(copy.begin(),copy.end());
    if(copy[0] == copy[1]) return -1;
    return copy[1];
}