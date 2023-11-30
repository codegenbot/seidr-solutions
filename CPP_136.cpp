vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int maxNeg = INT_MIN;
    int minPos = INT_MAX;

    for(int i = 0; i < lst.size(); i++){
        if(lst[i] < 0 && lst[i] > maxNeg){
            maxNeg = lst[i];
        }
        if(lst[i] > 0 && lst[i] < minPos){
            minPos = lst[i];
        }
    }

    result[0] = maxNeg != INT_MIN ? maxNeg : 0;
    result[1] = minPos != INT_MAX ? minPos : 0;

    return result;
}