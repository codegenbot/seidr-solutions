int search(vector<int> lst){
    int max = -1;
    for(int num : lst){
        if(num > 0 && num >= count(lst.begin(), lst.end(), num)){
            max = num;
            break;
        }
    }
    return max;
}