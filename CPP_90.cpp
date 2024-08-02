int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // or any other value that represents "None" in your language
    sort(lst.begin(), lst.end());
    vector<int>::iterator it = prev_element(lst.begin(), lst.end(), 2);
    if (it == lst.end()) return -1; // or any other value that represents "None"
    return *it;
}

vector<int>::iterator prev_element(vector<int>::iterator first, 
                                      vector<int>::iterator last,
                                      int n) {
    while (first != --last && ++first != last);
    if (std::distance(first, last) >= n - 1)
        return first;
    return last;
}