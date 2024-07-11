Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None as per problem statement
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int count = 0;
    for(int i=0; i<sorted.size();i++){
        for(int j=i+1; j<sorted.size();j++){
            if(sorted[i] == sorted[j]){
                count++;
            }
        }
        if(count > 1) return -1; // Return None as per problem statement
        if(i < sorted.size() - 1 && sorted[i] != sorted[i+1]) return sorted[i];
    }
    return -1; // Return None as per problem statement
}