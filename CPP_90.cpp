Here is the completed code:

int next_smallest(vector<int> lst) {
    if(lst.size() < 2) return -1; // or any other value that indicates "None"
    vector<int>::iterator it = std::next(std::min_element(lst.begin(), lst.end()));
    if(it == lst.begin()) return -1;
    return *it;
}