Here is the solution:

int next_smallest(vector<int> lst){
    vector<int> v(lst);
    sort(v.begin(), v.end());
    
    if(v.size() < 2 || (v[0] == v[1]))
        return -1;
    else
        return v[1];
}