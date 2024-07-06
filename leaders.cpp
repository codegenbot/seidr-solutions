vector<int> leaders(const vector<int>& v) {
    vector<int> result;
    for (auto i = v.rbegin(); i != v.rend(); ++i) {
        bool isLeader = true;
        for (auto j = i + 1; j != v.rend(); ++j) {
            if (*i < *j) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) result.push_back(*i);
    }
    return result;
}