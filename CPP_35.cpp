#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l;
    int max = 0;
    for(int i; cin >> i; ) {
        if(i > max) 
            max = i;
        l.push_back(i);
    }
    return *std::max_element(l.begin(), l.end());
}