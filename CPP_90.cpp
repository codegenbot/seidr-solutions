Here is the completed code:

int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; // Return None which is equivalent to -1
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<sorted.size();i++){
        if(i > 0 && sorted[i] != sorted[i-1]){
            if(i == sorted.size()-1 || sorted[i+1] != sorted[i])
                return sorted[i];
    }
    return -1;
}