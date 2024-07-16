#include <vector>
#include <initializer_list>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n++;
            stones = n;
        }
    }
    return pile;

int main() {
    int n;
    std::cout << "Enter the number of stones: ";
    std::cin >> n;
    auto pile = make_a_pile(n);
    for (auto stone : pile) {
        std::cout << stone << " ";
    }
    std::cout << std::endl;
    return 0;
}