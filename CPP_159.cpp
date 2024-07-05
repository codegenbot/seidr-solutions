#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - need);
    return { totalEaten, carrotsLeft };
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    int number, need, remaining;
    cin >> number >> need >> remaining;
    
    vector<int> result = eat(number, need, remaining);
    cout << result[0] << " " << result[1] << endl;
    
    return 0;
}