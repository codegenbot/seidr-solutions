#include <vector>

vector<int> generate_integers(int a, int b);

bool issame(vector<int> v, int a, int b) {
    vector<int> result = generate_integers(a, b);
    return result == v;
}

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}