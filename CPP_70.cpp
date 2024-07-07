vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end()); // sort in ascending order

    while (!lst.empty()) {
        result.push_back(*lst.begin()); // add smallest element to result
        lst.erase(lst.begin()); // remove smallest element from list

        if (!lst.empty())
            std::reverse(lst.begin(), lst.end()); // reverse the remaining elements

        if (!lst.empty())
            result.push_back(*lst.rbegin()); // add largest element to result
        lst.pop_back(); // remove largest element from list
    }

    return result;
}