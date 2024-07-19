vector<int> largest_smallest_integers(vector<int> lst){
    int largestNeg = 0, smallestPos = 0;
    for (int num : lst) {
        if (num < 0 && num < largestNeg) {
            largestNeg = num;
        } 
        if (num > 0 && (num < smallestPos || smallestPos == 0)) {
            smallestPos = num;
        }
    }
    return {largestNeg, smallestPos};
}