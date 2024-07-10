#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;

}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back(i);
    }
    std::random_shuffle(pile.begin(), pile.end());
    return pile;
}

void cpp100() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> pile = make_a_pile(n);
    if(issame(pile, make_a_pile(n))){
        cout << "The piles are the same." << endl;
    } else {
        cout << "The piles are not the same." << endl;
    }
    
}