#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile(n+1); 
    for (int i = 1; i <= n; ++i) {
        pile[i] = i; 
    }
    return pile;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1); 
    sort(a.begin(), a.end());
    cout << "Enter the number of cards in your hand: ";
    int m;
    cin >> m;
    vector<int> b(m);
    sort(b.begin(), b.end());
    
    if (isSame(a, b)) {
        cout << "You have the same pile as me." << endl;
    } else {
        cout << "You don't have the same pile as me." << endl;
    }
    
    return 0;
}