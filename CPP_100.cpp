#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    while (n > 0) {
        pile.push_back(n);
        n--;
    }
    return pile;
}

int main() {
    int n;
    std::cout << "Enter the number of stones: ";
    std::cin >> n;
    
    vector<int> pile = make_a_pile(n);
    
    if(issame(pile, {1})) {
        cout << "The pile is same as {1}" << endl;
    } else {
        cout << "The pile is not same as {1}" << endl;
    }
    
    return 0;
}