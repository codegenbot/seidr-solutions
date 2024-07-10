int next_smallest(vector<int> lst) {
    vector<int> temp = lst;
    if (temp.size() < 2) return -1; // Return None or -1 for simplicity
    sort(temp.begin(), temp.end());
    int res = temp[1];
    for(int i=0; i<temp.size()-1; i++){
        if(temp[i] != res){
            return res;
        }
    }
    return -1; // If all elements are the same, return None or -1
}