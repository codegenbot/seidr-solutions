vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), unique_element(l));
    return result;
}

vector<int>::iterator unique_element(vector<int>::iterator start, vector<int>::iterator end) {
    unordered_set<int> seen;
    for (; start != end; ++start)
        if (seen.insert(*start).second)
            *std::prev(&end, 1) = *start;
    return &*--end;
}