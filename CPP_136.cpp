vector<int> largest_smallest_integers(vector<int> lst){
    int largestNegative = 0, smallestPositive = 0;
    for(auto num : lst){
        if(num < 0 && num < largestNegative){
            largestNegative = num;
        }
        if(num > 0 && (num < smallestPositive || smallestPositive == 0)){
            smallestPositive = num;
        }
    }
    return {largestNegative, smallestPositive};
}