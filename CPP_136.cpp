Here is the completed code:

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2);
    if(lst.empty()) {
        result[0] = 0;
        result[1] = 0;
    } else {
        int maxNeg = INT_MIN, minPos = INT_MAX;
        for(int i : lst) {
            if(i < 0 && i > maxNeg) maxNeg = i;
            if(i > 0 && i < minPos) minPos = i;
        }
        result[0] = maxNeg;
        result[1] = minPos;
    }
    return result;
}