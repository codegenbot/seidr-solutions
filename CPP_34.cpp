#include <vector>
#include <set>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    std::set<int> s(a.begin(), a.end());
    for (int i : b) {
        if (!s.count(i)) return false;
    }
    return true;
}

std::vector<int> unique(std::vector<int> l){
    std::vector<int> result(l.begin(), unique_element(l.begin(), l.end()));
    return result;
}

std::vector<int>::iterator unique_element(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    std::unordered_set<int> seen;
    for (; start != end; ++start)
        if (seen.insert(*start).second)
            *std::prev(&end, 1) = *start;
    return &*--end;
}