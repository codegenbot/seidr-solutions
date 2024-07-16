vector<int> tri(int n){
    vector<int> result;
    if(n >= 0){
        if(n == 0) {
            result.push_back(0);
        } else if(n == 1) {
            result.push_back(3);
        } else {
            result.push_back(1);
            result.push_back(3);
            int prev = 1, curr = 3, next;
            for(int i = 2; i <= n; ++i){
                if(i % 2 == 0){
                    next = 1 + i / 2;
                } else {
                    next = prev + curr + 1 + (i + 1) / 2;
                }
                result.push_back(next);
                prev = curr;
                curr = next;
            }
        }
    }
    return result;
}