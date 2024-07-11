vector<int>::iterator it = unique(lst.begin(), lst.end());
if(it != lst.end()){
    vector<int>::iterator it2 = it;
    advance(it2, 1);
    if(it2 != lst.end()){
        return *it2;
    }
}
return -1; // or None as per the problem description