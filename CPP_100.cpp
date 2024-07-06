#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int>b) {
    return (a == b);
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int count = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            pile.push_back(count);
            count++;
        } else {
            pile.push_back(count);
            count += 2;
        }
        n--;
    }
    return pile;
}