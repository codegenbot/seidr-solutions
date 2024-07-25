int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None as per problem description
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    auto it = prev(std::unique(sorted.begin(), sorted.end()), sorted.end());
    for(int i : sorted){
        if(i==*it) continue;
        else {
            return i;
        }
    }
    return -1; // Return None as per problem description
}