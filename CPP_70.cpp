vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        
        if (*min_element(lst.begin(), lst.end()) == *max_element(lst.begin(), lst.end())) {
            result.insert(result.begin(), min);
            lst.clear();
        } else {
            result.push_back(min);
            lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
            
            result.push_back(max);
            lst.erase(std::remove(lst.begin(), lst.end(), max), lst.end());
        }
    }
    
    return result;
}