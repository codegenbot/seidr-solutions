vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNegative = 0, minPositive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > maxNegative) {
            maxNegative = num;
        }
        else if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }
    
    return {(maxNegative >= 0 ? 0 : maxNegative), (minPositive <= 0 ? 0 : minPositive)};
}