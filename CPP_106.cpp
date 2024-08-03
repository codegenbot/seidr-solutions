#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    
    for (auto ita = a.begin(), itb = b.begin(); ita != a.end(); ++ita, ++itb) {
        if (*ita != *itb)
            return false;
    }
    
    return true;
}