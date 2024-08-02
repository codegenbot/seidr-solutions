```cpp
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l;
    std::cin >> l[0];
    for(int i=1;i<124;++i){
        std::cin >> l[i];
    }
    return *std::max_element(l.begin(), l.end());
}