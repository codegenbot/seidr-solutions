#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = n;
    for(int i = 0; i < n; ++i) {
        pile.push_back(current);
        current += 2;
    }
    return pile;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = make_a_pile(n);
    for(int number : result) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}