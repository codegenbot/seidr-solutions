vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);

    int largestNegative = 0;
    int smallestPositive = 0;

    for(int i = 0; i < lst.size(); i++){
        if(lst[i] < 0 && lst[i] < largestNegative){
            largestNegative = lst[i];
        }
        if(lst[i] > 0 && (smallestPositive == 0 || lst[i] < smallestPositive)){
            smallestPositive = lst[i];
        }
    }

    result[0] = largestNegative;
    result[1] = smallestPositive;

    return result;
}