bool monotonic(vector<float> l){
    bool inc = true, dec = true;
    for(int i=0; i<l.size()-1; i++){
        if(l[i] > l[i+1]){
            inc = false;
        }
        if(l[i] < l[i+1]){
            dec = false;
        }
    }
    return inc || dec;
}