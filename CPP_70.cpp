vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end()); // sort the input vector in ascending order

    int left = 0; // index for the minimum value
    int right = lst.size() - 1; // index for the maximum value

    while (left <= right) {
        // add the minimum value to the result vector
        result.push_back(lst[left]);
        left++;

        // add the maximum value to the result vector
        result.push_back(lst[right]);
        right--;
    }

    return result;
}