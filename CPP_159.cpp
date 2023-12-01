#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int carrotsLeft = totalCarrots - need;

    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }

    vector<int> result = {totalCarrots, carrotsLeft};
    return result;
}

int main() {
    return 0;
}