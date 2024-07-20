Here is the solution:

int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None
    vector<int> temp = lst;
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size()-1;i++){
        if(temp[i] != temp[i+1]){
            return temp[i+1];
        }
    }
    return -1; // Return None
}