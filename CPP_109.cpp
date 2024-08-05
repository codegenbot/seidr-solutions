bool move_one_ball(const vector<int>& arr) {
    int n = arr.size();
    vector<int> temp = arr; // Create a copy of the input array
    for (int i = 0; i < n; ++i) {
        if (is_sorted(temp.begin(), temp.end())) { // Check the sorted condition on the copy
            return true;
        }
        rotate(temp.rbegin(), temp.rbegin() + 1, temp.rend()); // Rotate the copy
    }
    return false;
}