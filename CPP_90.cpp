#include <algorithm>
#include <iterator>

int main() {
    if (lst.size() < 2) return -1;
    
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    auto it = prev(end(sorted));
    int res = *it;
    
    return res;
}