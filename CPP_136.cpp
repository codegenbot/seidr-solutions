vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int maxNeg = INT_MIN, minPos = INT_MAX;
    for(int num : lst){
        if(num < 0 && num > maxNeg){
            maxNeg = num;
        } else if(num > 0 && num < minPos){
            minPos = num;
        }
    }
    if(maxNeg != INT_MIN){
        result[0] = maxNeg;
    }
    if(minPos != INT_MAX){
        result[1] = minPos;
    }
    return result;
}