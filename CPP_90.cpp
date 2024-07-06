int next_smallest(vector<int> lst){
    vector<int> temp = lst;
    if(temp.size() < 2) return -1; // or any value you like to represent None
    sort(temp.begin(), temp.end());
    for(int i=0; i<temp.size()-1; i++){
        if(temp[i] != temp[i+1])
            return temp[i];
    }
    return -1; // or any value you like to represent None
}