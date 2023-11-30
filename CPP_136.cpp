vector<int> largest_smallest_integers(vector<int> lst){
    int maxNegative = 0;
    int minPositive = 0;
    
    for(int num : lst){
        if(num < 0 && num < maxNegative){
            maxNegative = num;
        }
        else if(num > 0 && (num < minPositive || minPositive == 0)){
            minPositive = num;
        }
    }
    
    vector<int> result = {maxNegative, minPositive};
    return result;
}