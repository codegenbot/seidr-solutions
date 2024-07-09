vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    
    vector<int> result;
    for(int i : s1){
        if(find(s2.begin(),s2.end(),i)!=s2.end())
            result.push_back(i);
    }
    return result;
}