#include <vector>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(generate_integers(17, 89), {}));
}