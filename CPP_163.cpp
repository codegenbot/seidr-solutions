#include <vector>
#include <cassert>

vector<int> generate_integers(int a, int b);

bool issame(vector<int> a, vector<int> b) {
    // code for checking if the vectors are the same
}

int main() {
    assert (issame(generate_integers(17, 89), {}));
    return 0;
}

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    if (a > b) {
        swap(a, b);
    }
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}