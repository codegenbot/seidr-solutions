#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b){
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

int main_func() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    std::vector<int> pile = make_a_pile(n);
    if(issame(pile, make_a_pile(n))){
        cout << "The piles are the same." << endl;
    } else {
        cout << "The piles are not the same." << endl;
    }
    
    return 0;
}