#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.empty()) return a;
    if((a.front() + a.back()) % 2 == 0)
        sort_array(a.rbegin(), a.rend());
    else
        sort_array(a.begin(), a.end());
    return a;
}