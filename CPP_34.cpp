Here is the completed code:

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), unique_element(l.begin(), l.end()));
    return result;
}

int unique_element(vector<int>::iterator start, vector<int>::iterator end) {
    sort(start, end);
    vector<int> unique_elements;
    for (auto it = start; it != end; ++it) {
        if (std::find(unique_elements.begin(), unique_elements.end(), *it) == unique_elements.end()) {
            unique_elements.push_back(*it);
        }
    }
    return 0;
}