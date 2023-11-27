vector<int> sort_third(vector<int> l){
    vector<int> result(l.size());
    vector<int> sortedValues;
    
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            sortedValues.push_back(l[i]);
        }
    }
    
    sort(sortedValues.begin(), sortedValues.end());
    
    int sortedIndex = 0;
    
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            result[i] = sortedValues[sortedIndex];
            sortedIndex++;
        }
        else{
            result[i] = l[i];
        }
    }
    
    return result;
}