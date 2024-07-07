````
bool is_sorted(vector<int> lst){
    bool isSorted = true;
    for(int i=1; i<lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            isSorted = false;
            break;
        }
    }
    return isSorted && (find(lst.begin(), lst.end(), find(lst.begin(), lst.end(), lst[0]) + 1, lst.end()) == lst.end());
}
```