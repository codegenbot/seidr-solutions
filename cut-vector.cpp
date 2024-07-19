for (int i = 0; i < n; i++) { 
    if(i > 0) {
        int diff = std::abs(v[i] - ((sum1 - v[i-1]) / i));
        
        if (diff < min_diff) {
            min_diff = diff;
            index = i; // update the cutting point
        } else if (diff == 0) {
            res[0].assign(v.begin(), v.begin() + i+1);
            res[1].assign(v.begin() + i, v.end());
            return res;
        }
    }
    
    sum1 += v[i];
}