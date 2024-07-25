vector<int>::iterator it = unique(lst.begin(), lst.end());
if (it != lst.end()) {
    vector<int>::iterator nextIt = it;
    advance(nextIt, 1);
    if (nextIt != lst.end())
        return *nextIt;
}
return -1; // Return None if there is no such element