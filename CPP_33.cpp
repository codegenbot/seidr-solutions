vector<int> sort_third(vector<int> l){
    vector<int> thirdIndices;
    
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            thirdIndices.push_back(i);
        }
    }
    
    vector<int> sortedThirds;
    
    for(int i=0; i<thirdIndices.size(); i++){
        sortedThirds.push_back(l[thirdIndices[i]]);
    }
    
    sort(sortedThirds.begin(), sortedThirds.end());
    
    for(int i=0; i<thirdIndices.size(); i++){
        l[thirdIndices[i]] = sortedThirds[i];
    }
    
    return l;
}