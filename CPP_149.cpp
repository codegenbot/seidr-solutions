vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // First, calculate the sum of all integers in the list
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        // Convert each string element to integer
        int num = stoi(lst[i]);
        sum += num;
    }

    // Convert the sum back to string and add it to the result vector
    result.push_back(to_string(sum));

    // Then, sort the original list of strings in lexicographical order
    sort(lst.begin(), lst.end());

    // Finally, append the sorted list to the result vector
    result.insert(result.end(), lst.begin(), lst.end());

    return result;
}