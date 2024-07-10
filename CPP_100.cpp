```cpp
#include <vector>
#include <iostream>

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
    std::cout << "Enter the number of stones: ";
    std::cin >> n;
    std::vector<int> pile = make_a_pile(n);
    if(pile.size()==1) {
        std::cout << "The resulting pile is uniform." <<std::endl;
    } else {
        bool isUniform = true;
        for(int i=1;i<pile.size()-1;i++) {
            if((pile[i]-pile[i-1])!=(pile[i+1]-pile[i])) {
                isUniform = false;
                break;
            }
        }
        std::cout << "The resulting pile is uniform: ";
        if(isUniform) 
            std::cout << "true" <<std::endl; 
        else 
            std::cout << "false" <<std::endl;
    }