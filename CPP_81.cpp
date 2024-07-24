bool issame(const vector<string>& a) {
    if (a.size() != 2)
        return false;
    return a == vector<string>({"D-", "F"});
}