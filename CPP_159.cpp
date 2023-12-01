#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int carrotsLeft = totalCarrots - need;

    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }

    vector<int> result = {totalCarrots, carrotsLeft};
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Add your own test cases here to verify the correctness of the functions

    return 0;
}