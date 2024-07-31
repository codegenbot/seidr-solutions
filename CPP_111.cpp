map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b) {
    map<char, int>::iterator it1 = a.begin();
    map<char, int>::iterator it2 = b.begin();
    while (it1 != a.end() && it2 != b.end()) {
        if (*it1 != *it2) {
            return false;
        }
        ++it1;
        ++it2;
    }
    return (it1 == a.end() && it2 == b.end());
}