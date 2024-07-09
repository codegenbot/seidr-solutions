vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNeg = 0, minPos = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && abs(num) > maxNeg) {
            maxNeg = abs(num);
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }
    
    return {(maxNeg == 0 ? 0 : -maxNeg), (minPos == INT_MAX ? 0 : minPos)};
}