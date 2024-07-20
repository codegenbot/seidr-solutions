Here is the solution:

int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None as per the problem description
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for(int i = 0; i < copy.size(); i++) {
        if(i == 0 || copy[i] != copy[i-1]) {
            if(i+1 >= copy.size() - 1) return -1; // Return None as per the problem description
            else if(copy[i] < copy[i+1]) return copy[i];
        }
    }
    return -1; // Return None as per the problem description
}