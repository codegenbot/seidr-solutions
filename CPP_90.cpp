int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return -1;
    }
    sort(lst.begin(), lst.end());
    int prev = lst[0];
    for(int num : lst){
        if(num > prev){
            return num;
        }
        prev = num;
    }
    return -1;
}