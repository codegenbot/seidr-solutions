#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool make_a_pile(int n) {
    std::vector<int> pile;
    int num;
    for (int i = 1; i <= n; i++) {
        std::cout << "Enter the number of blocks in the " << i << "th layer: ";
        std::cin >> num;
        pile.push_back(num);
    }
    return issame(pile, {1, 2, 3, 4, 5});
}

int main() {
    int n;
    std::cout << "Enter the number of layers: ";
    std::cin >> n;
    if (make_a_pile(n)) {
        std::cout << "The pile is a perfect pyramid.\n";
    } else {
        std::cout << "The pile is not a perfect pyramid.\n";
    }
    return 0;
}