vector<int> common(vector<int> l1, vector<int> l2){
    vector<int> result;
    
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    auto it1 = unique(l1.begin(), l1.end());
    auto it2 = unique(l2.begin(), l2.end());
    
    l1.resize(distance(l1.begin(), it1));
    l2.resize(distance(l2.begin(), it2));
    
    for(int i = 0; i < l1.size(); i++){
        if(binary_search(l2.begin(), l2.end(), l1[i])){
            result.push_back(l1[i]);
        }
    }
    
    return result;
}