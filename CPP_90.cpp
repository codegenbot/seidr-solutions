Here is the solution:

int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; // or return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    auto it = std::next(std::min_element(sorted.begin(), sorted.end()));
    if(it == sorted.end()) return -1; // or return None
    for(auto i : lst){
        if(i < *it) return i;
    }
    return -1; // or return None
}