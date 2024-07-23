#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) 
        return false;
    
    for(int i=0; i<a.size(); i++) 
        if(a[i] != b[i])
            return false;
        
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}

int main() {
    assert(isSame(make_a_pile(8) , std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}