string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end)
        return "NO";

    int len = end - start + 1;
    
    for(int i=2;len/i>=1;i++)
        if(len%i==0) 
            break;

    if(i!=len+1) 
        return "NO";
    else
        return "YES";
}