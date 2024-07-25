Here is the completed code:

int next_smallest(vector<int> lst){
    vector<int> copy = lst;
    if(copy.size() < 2) return -1; // Return None
    sort(copy.begin(),copy.end());
    for(int i=0;i<copy.size()-1;++i)
        if(copy[i+1] > copy[i])
            return copy[i]+1;
    return -1; // Return None