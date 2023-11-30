vector<int> sort_third(vector<int> l){
    vector<int> result = l;
    vector<int> thirdIndices;
    
    for (int i = 0; i < l.size(); i++){
        if (i % 3 == 0){
            thirdIndices.push_back(i);
        }
    }
    
    sort(thirdIndices.begin(), thirdIndices.end(), [&](int a, int b){
        return l[a] < l[b];
    });
    
    for (int i = 0; i < thirdIndices.size(); i++){
        result[thirdIndices[i]] = l[thirdIndices[i]];
    }
    
    return result;
}