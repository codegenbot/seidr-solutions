int next_smallest(vector<int> lst){
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    int second_smallest = -1;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] > smallest){
            second_smallest = lst[i];
            break;
        }
    }
    return second_smallest;
}