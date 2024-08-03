bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] < lst[i-1]){
            cout << "Error: The list is not sorted. It contains duplicate elements." << endl;
            return false;
        }
    }
    return true;
}