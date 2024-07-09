int next_smallest(vector<int> lst) {
    vector<int> vec(lst);
    if(vec.size() < 2){
        return -1; // or any other value that represents "None"
    }
    sort(vec.begin(),vec.end());
    auto it = unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
    return (vec.size() > 1)? vec[1] : -1; // or any other value that represents "None"