#include <vector>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}