Here is the solution:

int next_smallest(vector<int> lst) {
    vector<int> vec(lst);
    sort(vec.begin(), vec.end());
    
    if (vec.size() < 2)
        return -1; // or None in Python
    
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] != vec[i + 1])
            return vec[i + 1];
    }
    
    return -1; // or None in Python
}