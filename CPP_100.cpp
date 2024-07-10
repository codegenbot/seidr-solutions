#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    
    for(int i=1; i<=n; ++i){
        pile.push_back(i);
    }
    
    return pile;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size()!=b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;

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