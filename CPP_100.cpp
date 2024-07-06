#include <initializer_list>

bool issame(int a, int b) {
    if(a == b)
        return true;
    else 
        return false;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((n % 2) == 1) { 
            pile.push_back(stones);
            stones += 2;
        } else { 
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter the number of piles: ";
    std::cin >> n;

    if (issame(n, 2)) {
        std::vector<int> pile = make_a_pile(n);
        for(int i=0; i < pile.size(); i++) {
            std::cout << pile[i] << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Enter even number please.\n";
    }

    return 0;
}