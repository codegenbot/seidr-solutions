int next_smallest(vector<int> lst){
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < (int)sorted.size() - 1; ++i){
        if(sorted[i] != sorted[i+1]){
            return sorted[i+1];
        }
    }
    return -1; // or None as per the problem description
}