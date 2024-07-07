int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None in Python
    vector<int> temp = lst;
    sort(temp.begin(), temp.end());
    for(int i=0; i<temp.size()-1; i++) {
        if(temp[i] < temp[i+1]) {
            if(i == 0) return temp[i];
            else return temp[i];
        }
    }
    return -1; // Return None in Python
}