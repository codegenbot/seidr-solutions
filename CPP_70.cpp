vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    
    sort(lst.begin(), lst.end()); // sort the input list in ascending order
    
    int left = 0; // index of the leftmost element in the input list
    int right = lst.size() - 1; // index of the rightmost element in the input list
    
    while (left <= right) {
        result.push_back(lst[left++]); // add the leftmost element to the result vector and increment left index
        
        if (left <= right) {
            result.push_back(lst[right--]); // add the rightmost element to the result vector and decrement right index
        }
    }
    
    return result;
}