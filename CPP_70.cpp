vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    bool pickMin = true;
    while (!lst.empty()) {
        if (pickMin) {
            result.push_back(lst.front());
            lst.erase(lst.begin());
        } else {
            result.push_back(lst.back());
            lst.pop_back();
        }
        pickMin = !pickMin;
    }
    return result;
}