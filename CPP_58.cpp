```cpp
bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(std::vector<int>(l1).begin(), std::vector<int>(l1).end());
    std::set<int> s2(std::vector<int>(l2).begin(), std::vector<int>(l2).end());

    std::set<int> intersection;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                           inserter(intersection, intersection.begin()));

    return {intersection.begin(), intersection.end()};
}