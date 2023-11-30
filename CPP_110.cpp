string exchange(vector<int> lst1,vector<int> lst2){
    int evenCount = 0;
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 == 0){
            evenCount++;
        }
    }
    if(evenCount == lst1.size()){
        return "YES"; // all elements in lst1 are even
    }
    return "NO"; // not all elements in lst1 are even
}