#include <vector>
#include <algorithm>
#include <random>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;

}

int make_a_pile(int n) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back(i);
    }
    std::shuffle(pile.begin(), pile.end(), mt);
    
    return 0; // return the first element of the shuffled pile
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int pile_top = make_a_pile(n);
    
    if(issame({1}, {pile_top})){
        std::cout << "The piles are the same." << std::endl;
    } else {
        std::cout << "The piles are not the same." << std::endl;
    }
}