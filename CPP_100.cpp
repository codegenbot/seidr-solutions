#include <vector>
#include <algorithm>

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

int main() {
    int n; 
    std::cin >> n;
    std::vector<int> result = make_a_pile(n);
    // your code here
    // you may want to add more functionality
    
    // Check if the vectors are the same
    bool isSame = (make_a_pile(n) == pile);
    
    return 0;
}