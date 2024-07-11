Here is the completed code:

vector<int> largest_smallest_integers(vector<int> lst){
    int maxNeg = 0, minPos = INT_MAX;
    for(int i : lst){
        if(i < 0 && i > maxNeg) maxNeg = i;
        else if(i > 0 && i < minPos) minPos = i;
    }
    return {(maxNeg >= 0)? 0: maxNeg, (minPos <= 0)? 0: minPos};
}