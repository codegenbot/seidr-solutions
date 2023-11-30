#include <vector>

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // compare vectors
    return a == b;
}

int main() {
    vector<int> result = generate_integers(17,89);
    assert (result == vector<int>{});
    
    return 0;
}