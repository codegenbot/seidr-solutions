Here is the solution:

vector<int> strange_sort_list(vector<int> lst) {
    if (lst.empty()) return {};
    vector<int> result;
    bool minNext = true;
    
    while (!lst.empty()) {
        if (minNext) {
            auto it = min_element(lst.begin(), lst.end());
            result.push_back(*it);
            lst.erase(it);
        } else {
            auto it = max_element(lst.begin(), lst.end());
            result.push_back(*it);
            lst.erase(it);
        }
        minNext = !minNext;
    }
    
    return result;