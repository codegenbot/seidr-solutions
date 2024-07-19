int next_smallest(vector<int> lst) {
    vector<int>(lst.begin(), lst.end()); 
    sort(begin(), end());
    if (size() < 2)
        return -1; 
    for (int i = 0; i < size() - 1; i++) {
        if (*this->begin() + i < *(this->begin() + i + 1))
            return *(this->begin() + i + 1);
    }
    return -1;
}