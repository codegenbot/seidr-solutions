#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((n % 2) == 1) { 
            pile.push_back(stones);
            stones += 2;
        } else { 
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}

int main() {
    int n;
    cout << "Enter the number of elements for the pile: ";
    cin >> n;
    vector<int> pile = make_a_pile(n);
    
    bool check = issame(pile, {1,2,3,4});
    if(check)
        cout << "The given condition is met." << endl;
    else
        cout << "The given condition is not met." << endl;
    
    return 0;
}