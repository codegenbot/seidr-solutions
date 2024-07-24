vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2);
    int neg = INT_MAX, pos = INT_MIN;

    for(int i : lst) {
        if(i < 0 && i > neg)
            neg = i;
        else if(i < 0)
            continue;

        if(i > 0 && i < pos)
            pos = i;
        else if(i > 0)
            continue;
    }

    result[0] = neg == INT_MAX ? 0 : neg;
    result[1] = pos == INT_MIN ? 0 : pos;

    return result;
}