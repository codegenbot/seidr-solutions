vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;

    // Sort the input vector in ascending order
    sort(lst.begin(), lst.end());

    // Loop through the sorted vector
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        // Add the minimum value to the result vector
        result.push_back(lst[left]);

        // If left and right pointers are equal, break the loop
        if (left == right) {
            break;
        }

        // Add the maximum value to the result vector
        result.push_back(lst[right]);

        // Move the pointers towards the center
        left++;
        right--;
    }

    return result;
}