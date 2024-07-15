int search(vector<int> lst){
    int maxVal = -1;
    for(int num : lst){
        int freq = count(lst.begin(), lst.end(), num);
        if(num > freq && freq >= maxVal){
            maxVal = num;
        }
    }
    return maxVal;
}