#include <vector>

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        result.push_back(i);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}