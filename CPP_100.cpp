#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ostream>

using namespace std;

bool is_same(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::random_device rd;
    std::mt19937 mt(rd());
    vector<int> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back(i);
    }
    shuffle(pile.begin(), pile.end(), mt);
    return pile; 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    problem100(n);

    return 0;
}

void problem100(int n) {
    vector<int> result = make_a_pile(n);
    if(is_same(vector<int>{}, result)){
        cout << "The piles are the same." << endl;
    } else {
        cout << "The piles are not the same." << endl;
    }
}