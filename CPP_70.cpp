vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end()); // Sort the list in ascending order
    vector<int> result;
    int left = 0; // Index for the leftmost element
    int right = lst.size() - 1; // Index for the rightmost element

    while (left <= right) {
        result.push_back(lst[left]); // Add the leftmost element to the result
        if (left != right) {
            result.push_back(lst[right]); // Add the rightmost element to the result
        }
        left++; // Move the left index one step right
        right--; // Move the right index one step left
    }

    return result;
}