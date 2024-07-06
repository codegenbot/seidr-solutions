```cpp
int next_smallest(const std::vector<int>& lst) {
    std::vector<int> v = {lst};  
    sort(v.begin(), v.end());
    if (v.size() < 2) return -1; 
    for(int i=0; i<v.size(); i++){
        if(find(lst.begin(), lst.end(), v[i]) != lst.end())
            return v[i];
    }
    return -1;
}