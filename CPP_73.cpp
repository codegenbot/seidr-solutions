int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<int> uniques;
    
    for (int i : arr) {
        bool exists = false;
        for (int j = 0; j < uniques.size(); ++j) {
            if (uniques[j] == i) {
                exists = true;
                break;
            }
        }
        
        if (!exists) {
            uniques.push_back(i);
        }
    }
    
    return uniques.size();
}