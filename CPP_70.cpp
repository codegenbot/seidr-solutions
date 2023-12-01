vector<int> strange_sort_list(vector<int> lst){
    vector<int> sorted_list;
    
    sort(lst.begin(), lst.end()); // Sort the input list in ascending order
    
    int left = 0; // Index for the leftmost element
    int right = lst.size() - 1; // Index for the rightmost element
    
    while (left <= right) {
        // Add the minimum value from the left side to the sorted list
        sorted_list.push_back(lst[left]);
        left++;
        
        // Add the maximum value from the right side to the sorted list
        sorted_list.push_back(lst[right]);
        right--;
    }
    
    return sorted_list;
}