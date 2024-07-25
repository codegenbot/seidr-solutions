int search(vector<int> lst){
    map<int,int> mp;
    for(int i:lst)mp[i]++;
    int res = -1;
    for(auto p:mp){
        if(p.second >= p.first && p.first > 0){
            res = p.first;
            break;
        }
    }
    return res;
}