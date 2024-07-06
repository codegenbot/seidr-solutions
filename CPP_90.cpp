int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None if there is no such element.
    vector<int> temp = lst;
    sort(temp.begin(), temp.end()); 
    for(int i = 0; i < (temp.size() - 1); i++) {
        if(temp[i] != temp[i+1]) {
            return temp[i+1];
        }
    }
    return -1; // If the vector contains all equal elements, or it is empty.
}