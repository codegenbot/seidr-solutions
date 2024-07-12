bool checkPairsSumToZero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int target = -s[i];
        if (target != s[i] && s.count(target)) {
            return true;
        }
    }
    return false;
}