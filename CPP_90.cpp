Here is the completed code:

int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None or -1
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int idx = distance(sorted.begin(), find(sorted.begin(), sorted.end(), *max_element(lst.begin(), lst.end())));
    return (idx == 0 || idx == (int)sorted.size() - 1)? -1 : sorted[idx];