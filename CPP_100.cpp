#include <vector>
#include <algorithm>
#include <random>

bool std::issame(std::vector<int> a, std::vector<int> b){
    if(a.size()!=b.size()) return false;
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
    if(issame({1}, pile)){
        std::cout << "The piles are the same." << std::endl;
    } else {
        std::cout << "The piles are not the same." << std::endl;
    }
    
}