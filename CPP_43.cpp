bool pairs_sum_to_zero(vector<int> l){
    for(int i=0; i<l.size()-1; i++){
        for(int j=i+1; j<l.size(); j++){
            if(l[i] + l[j] == 0){
                return true;
            }
        }
    }
    return false;
}