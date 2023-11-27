vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end()); // sort the list in ascending order
    int n = lst.size();
    vector<int> result(n); // create a new vector to store the result
    
    int left = 0; // index for the leftmost element
    int right = n - 1; // index for the rightmost element
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = lst[left]; // take the minimum value
            left++;
        } else {
            result[i] = lst[right]; // take the maximum value
            right--;
        }
    }
    
    return result;
}