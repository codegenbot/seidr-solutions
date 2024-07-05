#include <iostream>
#include <vector>
#include <algorithm> // For min and max functions
#include <cassert> // For assert function

using namespace std;

// Function to calculate totalEaten and carrotsLeft
vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + min(need, remaining);
    int carrotsLeft = max(remaining - need, 0);
    return {totalEaten, carrotsLeft};
}

// Function to check if two vectors are the same
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Test case
    assert(issame(eat(4, 5, 1), {5, 0}));
    cout << "Test passed!" << endl;
    return 0;
}