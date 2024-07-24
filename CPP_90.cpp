Here is the completed code:

int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None as per problem description
    vector<int> sortedList = lst;
    sort(sortedList.begin(), sortedList.end());
    for(int i=0; i<sortedList.size()-1; i++){
        if(sortedList[i] != sortedList[i+1])
            return sortedList[i+1];
    }
    return -1; // Return None as per problem description
}