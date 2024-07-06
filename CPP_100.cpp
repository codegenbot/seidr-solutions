#include <vector>
#include <iostream>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int level = 1;
    for (int i = 1; ; i++) {
        if ((n % 2 == 0 && i % 2 == 0) || (n % 2 != 0 && i % 2 != 0)) {
            pile.push_back(i);
            n--;
            level++;
        }
        if (n == 0) break;
    }
    return pile;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::vector<int> pile = make_a_pile(n);
    for (int i = 0; i < pile.size(); i++) {
        std::cout << pile[i] << " ";
    }
    return 0;
}