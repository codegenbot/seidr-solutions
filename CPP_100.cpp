```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2 * n; i > 0; --i) {
        pile.push_back(i);
    }
    return pile;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> pile = make_a_pile(n);
    if(issame(pile, {8, 10, 12, 14, 16, 18, 20, 22})) {
        for(int i = 2*n; i > 0; --i) {
            std::cout << i << " ";
        }
    } else {
        std::cout << "The pile is not correct." << std::endl;
    }
    return 0;
}