#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.empty()) return a;
    if((a.front() + a.back()) % 2 == 0)
        sort(a.rbegin(), a.rend());
    else
        sort(a.begin(), a.end());
    return a;
}