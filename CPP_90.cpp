Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int i;
    for(i=0;i<sorted.size()-1;++i)
        if(sorted[i] != sorted[i+1])
            break;
    return (i == sorted.size() - 2) ? sorted[i+1] : -1; // Return None
}