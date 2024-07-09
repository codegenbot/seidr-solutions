Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> copy = lst;
    if(copy.empty()) return -1; // or any other value that indicates None
    std::sort(copy.begin(),copy.end());
    for(int i=0; i<copy.size();i++){
        if(i==0) continue;
        else if(i==1) return copy[i];
        if(copy[i-1] != copy[i]) break;
    }
    return -1; // or any other value that indicates None
}