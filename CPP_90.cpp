vector<int>::iterator it = unique(lst.begin(), lst.end());
if (it != lst.end()) {
    vector<int>::iterator minIt = it + 1;
    while(minIt != lst.end() && *minIt == *(it)) {
        minIt++;
    }
    if(minIt != lst.end())
        return *minIt;
}
return -1; // or any other value that represents None in your problem statement