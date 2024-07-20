bool monotonic(vector<float> l) {
    bool inc = true, dec = true;
    for(int i=1; i<l.size(); i++) {
        if(l[i] > l[i-1])
            dec = false;
        else if(l[i] < l[i-1])
            inc = false;
    }
    return inc || dec;
}