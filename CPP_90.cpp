int next_smallest(vector<int> lst){
    vector<int> temp = lst;
    sort(temp.begin(), temp.end());
    
    for(int i=1; i<temp.size(); i++){
        if(temp[i] != temp[0]){
            return temp[i];
        }
    }
    
    return -1;
}