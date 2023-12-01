vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;

    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0 && lst[i] > largestNegative){
            largestNegative = lst[i];
        }
        else if(lst[i] > 0 && lst[i] < smallestPositive){
            smallestPositive = lst[i];
        }
    }

    result[0] = largestNegative == INT_MIN ? 0 : largestNegative;
    result[1] = smallestPositive == INT_MAX ? 0 : smallestPositive;

    return result;
}