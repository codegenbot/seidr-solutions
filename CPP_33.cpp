vector<int> sort_third(vector<int> l){
    vector<int> result(l.size());
    
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            result[i] = l[i];
        }
        else{
            result[i] = l[i];
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}