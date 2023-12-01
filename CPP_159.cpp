#include <iostream>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int carrotsLeft = totalCarrots - need;

    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }

    vector<int> result = {totalCarrots, carrotsLeft};
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));

    return 0;
}