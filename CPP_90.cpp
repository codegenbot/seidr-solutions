Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    if(sorted.size() < 2) return -1; // or you can return None
    
    int result = sorted[1];
    for(int i=0;i<sorted.size()-1;i++){
        if(sorted[i] != result){
            return result;
        }
    }
    return -1; // or you can return None
}