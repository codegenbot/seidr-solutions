string intersection(vector<int> interval1, vector<int> interval2){
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if(start <= end) {
        for(int i = 2; i*i <= (end - start); i++) {
            if((i & 1) == 0) continue;
            if((end - start) % i == 0) return "NO";
        }
        return "YES";
    } else {
        return "NO";
    }
}