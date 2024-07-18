bool move_one_ball(vector<int> arr){
    if (arr.empty()) {
        return true;
    }
    
    // Find the minimum element in the vector
    int minElement = *min_element(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == minElement) {
            if (is_sorted(arr.begin(), arr.end())) {
                return true;
            } else {
                return false;
            }
        }
    }

    return false;
}