int search(vector<int> lst){
    int max = -1;
    for(int i : lst){
        if(i > 0 && (int)count(lst.begin(), lst.end(), i) >= i){
            max = i;
            break;
        }
    }
    return max;
}