#include <vector>
#include <iostream>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int numStones = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            numStones += 2;
        } else {
            numStones += 1;
        }
        pile.push_back(numStones);
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    vector<int> pile = make_a_pile(n);
    
    if (pile.size() > 0) {
        for (int i = 0; i < pile.size(); i++) {
            cout << pile[i] << endl;
        }
    } else {
        cout << "The pile is empty." << endl;
    }
    
    return 0;
}