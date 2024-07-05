vector<int> result;
    bool pick_min = true;  // Flag to toggle between min and max pick

    while (!lst.empty()) {
        if (pick_min) {
            auto min_it = min_element(lst.begin(), lst.end());
            result.push_back(*min_it);
            lst.erase(min_it);
        } else {
            auto max_it = max_element(lst.begin(), lst.end());
            result.push_back(*max_it);
            lst.erase(max_it);
        }
        pick_min = !pick_min;
    }
    
    return result;
}