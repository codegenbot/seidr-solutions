#include <vector>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), unique_element(l.begin(), l.end()));
    return result;
}

std::vector<int>::iterator unique_element(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    unordered_set<int> seen;
    for (; start != end; ++start)
        if (seen.insert(*start).second)
            *std::prev(&end, 1) = *start;
    return &*--end;
}

int main() {
    vector<int> vec = {1,2,3,4,5};
    unique(vec);
    return 0;
}