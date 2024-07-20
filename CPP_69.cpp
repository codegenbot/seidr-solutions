int search(vector<int> lst){
    int max = 0;
    for(int i = 1; i <= *max_element(lst.begin(), lst.end()); i++){
        if(count(lst.begin(), lst.end(), i) >= i){
            max = i;
            break;
        }
    }
    return (max == 0)? -1 : max;
}