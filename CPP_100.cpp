```cpp
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;

}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    
    while(stones > 0) {
        pile.push_back(stones);
        if (stones % 2 == 1) {
            stones = stones + 1;
        } else {
            stones = stones + 2;
        }
    }
    
    return pile;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    std::vector<int> pile = make_a_pile(n);
    if(issame(pile, make_a_pile(n))){
        std::cout << "The piles are the same." << std::endl;
    } else {
        std::cout << "The piles are not the same." << std::endl;
    }
    
    return 0;
}