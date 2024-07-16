vector<int> largest_smallest_integers(vector<int> lst){
    int largestNegative = 0;
    int smallestPositive = 0;
    for (int num : lst) {
        if (num < 0 && num < largestNegative) {
            largestNegative = num;
        } else if (num > 0 && (num < smallestPositive || smallestPositive == 0)) {
            smallestPositive = num;
        }
    }
    return {largestNegative, smallestPositive};
}