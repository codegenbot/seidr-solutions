int search(vector<int> lst){
    int max = 0;
    for(int i : lst){
        if(i > 0 && i >= count(i, lst)){
            if(max < i) max = i;
        }
    }
    return max == 0 ? -1 : max;
}