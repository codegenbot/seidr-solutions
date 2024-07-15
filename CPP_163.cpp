#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}