Here is the completed code:

int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None (or -1 in this case)
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for(int i = 0; i < copy.size(); i++){
        if(i == 1) return copy[i];
    }
    return -1; // Return None
}